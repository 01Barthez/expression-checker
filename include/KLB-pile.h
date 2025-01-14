#ifndef KLB_PILE_H
#define KLB_PILE_H

#include <stdbool.h>

// Définition de la structure de la pile
typedef struct {
    char *KLB_elements;
    int KLB_top;
    int KLB_capacite;
} KLB_Pile;

// Prototypes des fonctions
KLB_Pile* KLB_creer_pile(int capacite);
void KLB_detruire_pile(KLB_Pile *pile);
bool KLB_est_vide(KLB_Pile *pile);
bool KLB_est_pleine(KLB_Pile *pile);
void KLB_empiler(KLB_Pile *pile, char element);
char KLB_depiler(KLB_Pile *pile);
char KLB_sommet(KLB_Pile *pile);

#endif
