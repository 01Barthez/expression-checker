#include <stdio.h>
#include <string.h>
#include "../include/KLB-pile.h"
#include "../include/KLB-verificateur.h"

// Fonction pour vérifier une expression bien formée
bool KLB_verifier_expression(const char *expression) {
    int sizeOfWord = strlen(expression);
    
    // Si le mot ne commence pas par un . et ne se termine pas par un ! alors on s'arrete.
    if (expression[0] != '.' || expression[sizeOfWord - 1] != '!') {
        return false;
    }

    Pile_Tab_t *pile = KLB_creer_pile(sizeOfWord);
    
    for (int i = 0; expression[i] != '\0'; i++) {
        char c = expression[i];
        if (c == '(' || c == '[' || c == '{') {
            KLB_empiler(pile, c);
        } else if (c == ')' || c == ']' || c == '}') {
            if (KLB_est_vide(pile)) {
                KLB_detruire_pile(pile);
                return false;
            }
            char sommet = KLB_depiler(pile);
            if ((c == ')' && sommet != '(') || 
                (c == ']' && sommet != '[') || 
                (c == '}' && sommet != '{')) {
                KLB_detruire_pile(pile);
                return false;
            }
        }
    }

    bool bien_formee = KLB_est_vide(pile);
    KLB_detruire_pile(pile);
    return bien_formee;
}
