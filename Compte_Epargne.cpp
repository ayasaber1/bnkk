#include "Compte_Epargne.h"
#include <assert.h>
#include "Devise.h"
Compte_Epargne::Compte_Epargne()
    : Compte()
{

}

Compte_Epargne::Compte_Epargne(Client* c, Devise* s, double taux)
    : Compte(c,s)
{
    assert(taux >= 0 && taux <= 100);
    this->TauxInteret = taux;

}
void Compte_Epargne::Calcul_TauxInteret()
{
    Devise res = this->CalculIteret(this->TauxInteret);
    this->deposerArgent(res);
}


