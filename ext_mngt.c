#include "ext_mngt.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
void addExt(char *ext, char *nomFichierSource, char *nomFichierDest){
	
	int longeur=0;
	int i;


	longeur=strlen(nomFichierSource);
	longeur+=strlen(ext);
	longeur++;

	/*nomFichierDest = (char *) malloc ((longeur+1)*sizeof(char));*/

	for(i=0;i<strlen(nomFichierSource);i++){
		nomFichierDest[i]=nomFichierSource[i];
	}

	nomFichierDest[strlen(nomFichierSource)]='.';


	for(i=strlen(nomFichierSource)+1;i<longeur;i++){
		nomFichierDest[i]=ext[i-strlen(nomFichierSource)-1];
	}
	
	nomFichierDest[longeur+1]='\0';	

	
}
/*addPreExt(char *ext, char *nomFichierSource, char *nomFichierDest){

	int longeur=0;
	int i;
	int numbrepoint;
	
	for(i=0;i<strlen(nomFichierSource);i++){
		if(nomFichierSource[i]=='.'){
		}
	}






}*/
