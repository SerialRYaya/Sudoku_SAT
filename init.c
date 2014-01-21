#include "init.h"
#include "affichage.h"


Grille creer_grille(int dimension) {
	int i,j;
	Grille G = NULL;
	G = (Grille)malloc(dimension*sizeof(int*));
	for(i=0;i<dimension;i++) {
		G[i] = (int*)malloc(dimension*sizeof(int));
		if (G[i] != NULL) {
			for(j=0;j<dimension;j++) {
				G[i][j]=0;
			}
		}
	}
	return G;
}
/*
void afficher_grille(Grille G,int dimension) {
	int i,j;
	for(i=0;i<dimension;i++) {
		for(j=0;j<dimension;j++) {
			printf("%i ",G[i][j]);
		}
		printf("\n");
	}
}
*/
void saisir_case(Grille G) {
	int i,j,k;
	printf("Quelle ligne ?\n");
	scanf("%i",&i);
	printf("Quelle colonne ?\n");
	scanf("%i",&j);
	printf("Quelle valeur ?\n");
	scanf("%i",&k);
	G[i-1][j-1] = k;
}

void saisir_grille(Grille *G, int dimension) {
	int choix;
	while(choix != 2) {
		afficher_grille(*G,dimension);
		printf("Saisir une case : tapez 1\nQuitter : tapez 2\n");
		scanf("%i",&choix);
		switch (choix) {
			case 1 :
 				saisir_case(*G);
				//verifier_case();
				break;
		}
	}
}



