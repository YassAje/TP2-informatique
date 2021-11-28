#include <stdio.h>
#include <stdlib.h>
#include "messages.h"
#include "ext_mngt.h"
#include <string.h>

int main(int argc,char *argv[]){

/*char *nomdefichier="existepas";*/
	char *ext="ext";
	char *nomFichierDest;
	int longeur;
	
	longeur=strlen(argv[1]);
	longeur+=strlen(ext);
	longeur++;

	nomFichierDest = (char *) malloc ((longeur+1)*sizeof(char));
	
	addExt(ext,argv[0],nomFichierDest);
	printf("%s",nomFichierDest);
	return (EXIT_SUCCESS);

}











