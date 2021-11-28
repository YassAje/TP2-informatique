#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>


void printtab();

void printtab(){
printf("+---+---+---+---+---+---+---+---+---+\n");
}
/*foction de création de tablteau*/


int main(int argc,char *argv[]){



int i;/* i c'est la numéro de ligne*/
char c=0;/* c c'est la charactère à affichier*/
int j;

printtab();
printf("|L/H| 0 | 1 | 2 | 3 | 4 | 5 | 6 | 7 |\n");


	for(i=0;i<16;i++){
		c=i;/* mettre c suivre le numéro de la ligne au début de ligne*/
		printtab();
		printf("| %X |",i);
		for(j=0;j<8;j++){
			if(isprint(c)){
				printf(" %c |",c);
			}
			else{
			printf("   |");
			}
		c+=16;
		}
printf("\n");
}
printtab();



return (EXIT_SUCCESS);

}
/*
zone de réponse
*/
