#include <stdio.h>
#include <stdlib.h>

typedef int** Grille;

void saisir_grille(Grille *G, int dimension);
void saisir_case(Grille G);
Grille creer_grille(int dimension);
