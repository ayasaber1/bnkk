#pragma once
#include "Compte.h"
class Compte_Epargne :  public Compte
{

public: 
	Compte_Epargne(); 
	Compte_Epargne(Client*, Devise*,double taux); 
	  void Calcul_TauxInteret(); 
private: 

	double TauxInteret;



};

