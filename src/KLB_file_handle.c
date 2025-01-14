#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../include/KLB_load_file.h"

void KLB_loadExpression(char *string_variable, const char *filename) {
    FILE *file = fopen(filename, "r");
    if (!file) {
        printf("\n\n❌ Fichier \"%s\" introuvable.\n", filename);
        perror("\nVeuillez créer le fichier et y ajouter des mots avant de relancer l'application.\n");
     
        exit(EXIT_FAILURE);
    }

    char letter_expression[256] = "";
    while (fscanf(file, "%s", letter_expression) != EOF) {
        strcat(string_variable, letter_expression);
    }

    fclose(file);
}
