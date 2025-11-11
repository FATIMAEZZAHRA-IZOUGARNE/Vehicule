#include "Vehicule.h"

Vehicule::Vehicule(string name, string marc, string col):nom(name),marque(marc),color(col)
{

}

void Vehicule::afficher() const
{
	cout << " * *******************Les infos : **********************"<< endl;
	cout << "Nom de vehicule :" << this->nom << endl;
	cout << "La marque de vehicule :" << this->marque << endl;
	cout << "La couleur de vehicule :" << this->color << endl;
}


Vehicule::~Vehicule()
{
	cout << "appel au destructeur de la classe Vehicule" << endl;
}
