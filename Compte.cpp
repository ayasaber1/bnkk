#include "Compte.h"
#include  "Devise.h"
int Compte::cpt = 0;
Compte::Compte(): numCompte(++cpt)
{
    this->solde = new Devise(0.0);
    this->Proprietaire = new Client();

}
 void Compte::deposerArgent(Devise montant) {
     
     this->solde->operator+=( montant);
    // *(this->solde) += montant;

 }
 bool Compte::retirerArgent(Devise montant)
 {
     if (*(this->solde) >= montant) {
         this->solde->operator-=(montant);
       
         return true;
     }
        
     return false;
 }
 Devise Compte::CalculIteret(double taux) const
 {
     Devise t(taux / 100);
     
     return (*(this->solde) * t);
 }
 bool Compte::checkSolde(Devise* dec, Devise montant) const
 {
     if (*(this->solde) - montant >= *dec);
     return true;
     return false;
 }
 
Compte::Compte(Client *Prop, Devise *solde) : numCompte(++cpt)
{
    this->Proprietaire = Prop;
    this->solde = solde;
}

bool Compte::transfererArget(Compte* c, Devise montant)
{
  if(  this->retirerArgent(montant))
  {
c->deposerArgent(montant);
return true;
  }
    return false;
}

void Compte::consultersolde() const
{
    std::cout << " Numcomte: " << this->numCompte << endl;
    this->Proprietaire->afficher();
    std::cout << " solde: " ;
    this->solde->afficherDevise();

}

Compte::~Compte()
{
}
