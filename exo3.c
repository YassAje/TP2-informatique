#include <stdio.h>
#include <stdlib.h>
#include "messages.h"
#include "ext_mngt.h"
#include <string.h>

int main(int argc,char *argv[]){

/*char *nomdefichier="existepas";*/
	char *nouveau;
	int c;
	char *ext="ext";
	int longeur;

	longeur=strlen(argv[1]);
	longeur+=strlen(ext);
	longeur++;

	nouveau = (char *) malloc ((longeur+1)*sizeof(char));

	FILE *fp ;
	FILE *fp2 ;
	
	fp = fopen(argv[1],"r");
	addExt(ext,argv[1],nouveau);

	fp2 = fopen (nouveau,"w+");

	printf(MSG_INFO_USAGE,argv[1]);
	if(fp==NULL){
		printf(MSG_ERR_OPEN,argv[1]);
		perror("Erreur c'est ");
		return(-1);
	}

	printf("Apuyez entrée pour afficher\n");
	fflush(stdin);
	while ( getchar() != '\n' ){}

		printf("Le texte en majiscule c'est :\n");
		while(!feof(fp)) {
      		c = fgetc(fp);
     
		if(c<123 && c>96){
				c-=32;
	       printf("%C",c);
              
        /*lire les contenus de fichiers et l'affich dans le terminal*/
		fprintf(fp2,"%C",c);
		/*transformation de miniscule à majuscule*/
             
  		}else {printf("%c",c);}
       
              /*et les symboles qui ne sont pas des lettres miniscules restent les memes*/
		}
  printf("\n");
fclose(fp);
fclose(fp2);

return (EXIT_SUCCESS);

}
/*les es caractères accentués sont affichées en miniscule sinon il va afficher erreur*/
/* veuillez tester avec les fichiers test.txt et test.txt.ext ou meme exo1(2,3).c*/










