#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "include/KLB-verificateur.h"
#include "include/KLB_load_file.h"

int main() {
    char KLB_expression[256] = "";
    const char file_name[] = "doc/expression.txt";
    int choix;
    
    system("clear");
    do {
        printf("\n\n\t================== MENU ==================");
        
        printf("\n\n\t1. Vérifier l'expression du fichier");
        printf("\n\t2. Entré une expression et vérifié");
        printf("\n\t3. Quitter");
        printf("\n\n\t_______________________________________");
        
        printf("\n\n\tVotre choix < 1--3 >: ");
        scanf("%d", &choix);

        switch (choix) {
            case 1:
        printf("\t_______________________________________________________________");
                printf("\n\n\t1. Vérifier l'expression du fichier\n\n");
                strcpy(KLB_expression, ""); // initialize var string to empty var;

                KLB_loadExpression(KLB_expression, file_name);
                printf("\nExpression du fichier: %s", KLB_expression);

                if (KLB_verifier_expression(KLB_expression)) {
                    printf("\nL'expression du fichier est bien formée.\n");
                } else {
                    printf("\nL'expression du fichier n'est pas bien formée.\n");
                }
            break;

            case 2:
                printf("\t_______________________________________________________________");
                printf("\n\n\t2. Entré une expression et vérifié");
                printf("\n\nEntrez une expression : ");
                scanf("%s", KLB_expression);
                
                if (KLB_verifier_expression(KLB_expression)) {
                    printf("L'expression est bien formée.\n");
                } else {
                    printf("L'expression n'est pas bien formée.\n");
                }
            break;

            case 3:
                printf("\t_______________________________________________________________");
                printf("\n\n\tMerci d'avoir Utiliser mon programme,\n\t\t Au revoir et à très bientot !\n");
     
                printf("\n\n**********************************************************\n\n");
                exit(EXIT_SUCCESS);
                break;

            default:
                printf("\nChoix invalide. Réessayez.\n");
        }

        printf("\n\n**********************************************************\n\n");
    } while (choix != 3);

    printf("\n\tMerci d'avoir Utiliser mon programme,\n\t\t Au revoir et à très bientot !\n");
    
    printf("\n\n**********************************************************\n\n");
    
    return 0;
}

