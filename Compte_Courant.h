#pragma once
#include "Compte.h"
#include "Devise.h"
class Compte_Courant :
    public Compte
{
    Compte_Courant(Client* c, Devise* s, Devise dec);

    bool retirerArgent(Devise montant)override;

private: 
    Devise decouvert;

};

