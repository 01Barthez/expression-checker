#ifndef KLB_PILE_H
#define KLB_PILE_H

#include <stdbool.h>

/************************************************************************************************/

// Définition de la structure pour un nœud de la pile
typedef struct KLB_Node {
    char element;              // L'élément stocké dans le nœud
    struct KLB_Node *suivant;  // Pointeur vers le nœud suivant
} KLB_Node_t;

// Définition de la structure pour la pile
typedef struct {
    KLB_Node_t *sommet;  // Pointeur vers le sommet de la pile
    int taille;          // Nombre d'éléments dans la pile
} Pile_Tab_t;

/************************************************************************************************/

// Prototypes des fonctions
Pile_Tab_t* KLB_creer_pile();
void KLB_detruire_pile(Pile_Tab_t *pile);
bool KLB_est_vide(Pile_Tab_t *pile);
bool KLB_est_pleine(Pile_Tab_t *pile);
void KLB_empiler(Pile_Tab_t *pile, char element);
char KLB_depiler(Pile_Tab_t *pile);
char KLB_sommet(Pile_Tab_t *pile);

/************************************************************************************************/

#endif // KLB_PILE_H
