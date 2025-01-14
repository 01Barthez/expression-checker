#include <stdio.h>
#include <stdlib.h>
#include "../include/KLB-pile.h"

// Fonction pour créer une pile
KLB_Pile* KLB_creer_pile(int capacite) {
    KLB_Pile *pile = (KLB_Pile *)malloc(sizeof(KLB_Pile));
    pile->KLB_elements = (char *)malloc(capacite * sizeof(char));
    pile->KLB_top = -1;
    pile->KLB_capacite = capacite;
    return pile;
}

// Fonction pour détruire une pile
void KLB_detruire_pile(KLB_Pile *pile) {
    free(pile->KLB_elements);
    free(pile);
}

// Vérifie si la pile est vide
bool KLB_est_vide(KLB_Pile *pile) {
    return pile->KLB_top == -1;
}

// Vérifie si la pile est pleine
bool KLB_est_pleine(KLB_Pile *pile) {
    return pile->KLB_top == pile->KLB_capacite - 1;
}

// Empile un élément
void KLB_empiler(KLB_Pile *pile, char element) {
    if (KLB_est_pleine(pile)) {
        printf("Erreur : Pile pleine\n");
        return;
    }
    pile->KLB_elements[++pile->KLB_top] = element;
}

// Dépile un élément
char KLB_depiler(KLB_Pile *pile) {
    if (KLB_est_vide(pile)) {
        printf("Erreur : Pile vide\n");
        return '\0';
    }
    return pile->KLB_elements[pile->KLB_top--];
}

// Retourne le sommet de la pile
char KLB_sommet(KLB_Pile *pile) {
    if (KLB_est_vide(pile)) {
        printf("Erreur : Pile vide\n");
        return '\0';
    }
    return pile->KLB_elements[pile->KLB_top];
}
