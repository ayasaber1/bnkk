#pragma once
#include<iostream>
#include"Client.h"
//#include"Devise.h"
class Devise; // pré-declaration 
using namespace std;
class Compte
{
public:
	Compte();
	Compte(Client* Prop, Devise *solde);
	virtual bool transfererArget(Compte*c, Devise montant)=0;
	virtual void consultersolde() const;
	virtual void deposerArgent(Devise montant);
	virtual bool retirerArgent(Devise montant);
	Devise CalculIteret(double taux) const;
	bool checkSolde(Devise* dec, Devise montant)const; 
	~Compte();
private:
	const int numCompte;
	static int cpt;
	Client *Proprietaire;
    Devise *solde; 
};

