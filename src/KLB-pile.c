#include <stdio.h>
#include <stdlib.h>
#include "../include/KLB-pile.h"

/************************************************************************************************/

// Fonction pour créer une pile
Pile_Tab_t* KLB_creer_pile() {
    Pile_Tab_t *pile = (Pile_Tab_t *)malloc(sizeof(Pile_Tab_t));
    if (!pile) {
        printf("Erreur : Impossible de créer la pile.\n");
        exit(EXIT_FAILURE);
    }
    pile->sommet = NULL;
    pile->taille = 0;
    
    return pile;
}

/************************************************************************************************/

// Fonction pour détruire une pile
void KLB_detruire_pile(Pile_Tab_t *pile) {
    KLB_Node_t *actuel = pile->sommet;
    while (actuel != NULL) {
        KLB_Node_t *temp = actuel;
        actuel = actuel->suivant;
        free(temp);
    }
    free(pile);
}

/************************************************************************************************/

// Vérifie si la pile est vide
bool KLB_est_vide(Pile_Tab_t *pile) {
    return pile->sommet == NULL;
}

/************************************************************************************************/

// Empile un élément
void KLB_empiler(Pile_Tab_t *pile, char element) {
    KLB_Node_t *nouveau_noeud = (KLB_Node_t *)malloc(sizeof(KLB_Node_t));
    if (!nouveau_noeud) {
        printf("Erreur : Impossible d'empiler l'élément.\n");
        exit(EXIT_FAILURE);
    }
    nouveau_noeud->element = element;
    nouveau_noeud->suivant = pile->sommet; // Le nouveau sommet pointe vers l'ancien sommet
    pile->sommet = nouveau_noeud;          // Met à jour le sommet de la pile
    pile->taille++;
}

/************************************************************************************************/

// Dépile un élément
char KLB_depiler(Pile_Tab_t *pile) {
    if (KLB_est_vide(pile)) {
        printf("Erreur : Pile vide.\n");
        return '\0';
    }
    KLB_Node_t *temp = pile->sommet;  // Sauvegarde le sommet actuel
    char valeur = temp->element;     // Récupère la valeur de l'élément
    pile->sommet = temp->suivant;    // Déplace le sommet vers le suivant
    free(temp);                      // Libère la mémoire du nœud dépilé
    pile->taille--;
    return valeur;
}

/************************************************************************************************/

// Retourne le sommet de la pile sans le dépiler
char KLB_sommet(Pile_Tab_t *pile) {
    if (KLB_est_vide(pile)) {
        printf("Erreur : Pile vide.\n");
        return '\0';
    }
    return pile->sommet->element;
}

/************************************************************************************************/
