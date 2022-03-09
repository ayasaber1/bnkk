#include "Devise.h"
using namespace std;
void Devise::afficherDevise()
{
	cout << "valeur : " << this->valeur << std::endl;
}

Devise& Devise::operator+=(const Devise& d2)
{
	this->valeur += d2.valeur;
	return *this;
}

Devise& Devise::operator-=(const Devise& d2)
{
	this->valeur -= d2.valeur;
	return *this;
	// TODO: insérer une instruction return ici
}

Devise& Devise::operator-(const Devise& d2)
{
	Devise res(this->valeur - d2.valeur); // constructeur avec parametres
	return res;
}

bool Devise::operator>=(Devise& D) const
{
	return (this->valeur >= D.valeur) ? true :false;
}

Devise Devise::operator*(Devise& D)
{
	this->valeur = this->valeur * D.valeur;
	return *this;
}
