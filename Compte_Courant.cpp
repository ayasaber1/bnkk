#include "Compte_Courant.h"

Compte_Courant::Compte_Courant(Client* c, Devise* s, Devise dec)
	: Compte(c,s)
{
	this->decouvert = dec;
}

bool Compte_Courant::retirerArgent(Devise montant)
{
	if(this->checkSolde(&(this->decouvert), montant))
	return this->Compte::retirerArgent(montant);

	return false;
}
