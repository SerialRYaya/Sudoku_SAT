#include "decodage.h"


void appel_sat(){

    system("start batch.bat" ); // " java -jar sat4j-sat.jar test1.cnf > patate2.txt " appel avec test1.cnf en param�tre et �criture dans patate2.txt
    }



char *decoupage (const char *fichier){
        char chaine[7000]="";
        while ( fgets(chaine,7000, fichier) != NULL )
            {

                 if ( chaine[0]== 'v' ){
                    return chaine;
                }
            }
            return;
}

void resolution(){
    appel_sat();
    FILE *decode = NULL;
    decode = fopen("patate2.txt","r");
    Sleep(2000);
    printf("%s",decode);
    if (decode == NULL){
        printf("Le fichier ne peut pas etre ouvert \n ");
        return 0;
        }
    printf("SOLUTION : \n %s",decoupage(decode));
    fclose(decode);
}

