#pragma once
#include <iostream>
using namespace std;

class Vehicule
{
private:
	string nom;
	string marque;
	string color;
public:
	Vehicule(string = "", string = "", string = "");
	virtual void afficher() const; // Make afficher() virtual so it can be overridden
	virtual void arreter() const = 0;
	virtual void demarrer() const = 0;
	~Vehicule();
};


