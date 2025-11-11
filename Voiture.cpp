#include "Voiture.h"

Voiture::Voiture(string n, string m, string c, float vitmax, float p)
    : Vehicule(n, m, c), vitesseMax(vitmax), poids(p)
{
}

void Voiture::afficher() const
{
    Vehicule::afficher(); // appel de la méthode de base
    cout << "---------- Voiture ----------" << endl;
    cout << "Vitesse maximale : " << vitesseMax << " km/h" << endl;
    cout << "Poids : " << poids << " kg" << endl;
}

void Voiture::arreter() const
{
    cout << "La voiture s'arrête." << endl;
}

void Voiture::demarrer() const
{
    cout << "La voiture démarre." << endl;
}

Voiture::~Voiture()
{
    cout << "Appel au destructeur de la classe Voiture." << endl;
}
