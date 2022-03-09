#pragma once
#include<iostream>
using namespace std;

class Client
{
public:
	Client();
	Client(string nom, string prenom);
	void afficher() const;
	~Client();
	










private:
	 const  int  matricule;
	static int cpt;
	string nom;
	string prenom;

};

