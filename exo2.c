#include <stdio.h>
#include <stdlib.h>
#include "messages.h"


int main(int argc,char *argv[]){

/*char *nomdefichier="existepas";*/

int c;
FILE *fp ;
fp = fopen(argv[1],"r");
printf(MSG_INFO_USAGE,argv[1]);
	if(fp==NULL){
	printf(MSG_ERR_OPEN,argv[1]);
	perror("Erreur c'est ");
	return(-1);
	}
	printf("Apuyez entrée pour afficher\n");
	fflush(stdin);
	while ( getchar() != '\n' ){}
		while(!feof(fp)) {
      		c = fgetc(fp);
      		printf("%c", c);
  		}/* lire les contenus de fichiers et l'affich dans le terminal*/
fclose(fp);

return (EXIT_SUCCESS);

}
/*
zone de réponse
*/
