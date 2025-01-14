#ifndef KLB_PILE_H
#define KLB_PILE_H

#include <stdbool.h>

// Définition de la structure de la pile
typedef struct {
    char *KLB_elements;
    int KLB_top;
    int KLB_capacite;
} Pile_Tab_t;

// Prototypes des fonctions
Pile_Tab_t* KLB_creer_pile(int capacite);
void KLB_detruire_pile(Pile_Tab_t *pile);
bool KLB_est_vide(Pile_Tab_t *pile);
bool KLB_est_pleine(Pile_Tab_t *pile);
void KLB_empiler(Pile_Tab_t *pile, char element);
char KLB_depiler(Pile_Tab_t *pile);
char KLB_sommet(Pile_Tab_t *pile);

#endif
