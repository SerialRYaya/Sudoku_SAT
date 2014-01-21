#include "decodage.h"

char *str_sub (const char *s, unsigned int start, unsigned int end)
{
   char *new_s = NULL;

   if (s != NULL && start < end)
   {
/* (1)*/
      new_s = malloc (sizeof (*new_s) * (end - start + 2));
      if (new_s != NULL)
      {
         int i;

/* (2) */
         for (i = start; i <= end; i++)
         {
/* (3) */
            new_s[i-start] = s[i];
         }
         new_s[i-start] = '\0';
      }
      else
      {
         fprintf (stderr, "Memoire insuffisante\n");
         exit (EXIT_FAILURE);
      }
   }
   return new_s;
}

char decoupage (const char *decode){
    char *solution;
    char *debut_sol;
    if (decode == NULL){
        printf("Le fichier ne peut pas etre ouvert \n ");
        return 0;
    }
    debut_sol=strchr(decode,'S');
    printf("ADRESSE : %d",debut_sol);
    solution=str_sub(decode,debut_sol,SEEK_END);
    return solution;
}
