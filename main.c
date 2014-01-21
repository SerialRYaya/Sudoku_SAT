#include "init.h"
#include "affichage.h"
#include "decodage.h"


int main(int argc, char** argv) {
	int dimension;
	printf("saisissez la largeur désirée : ");
	scanf("%i",&dimension);
	Grille G;
	G = creer_grille(dimension);
	//saisir_grille(&G,dimension);
    system("start Z:\\Sudoku\\batch.bat" );
    FILE *decode = NULL;
    char *sol;
    decode = fopen("patate2.txt","r");
      if (decode == NULL){
        printf("Le fichier ne peut pas etre ouvert \n ");
        return 0;
    }
    sol=decoupage(decode);
    printf("%s",&sol);
    printf("okkkkkk");
    fclose(decode);
}
