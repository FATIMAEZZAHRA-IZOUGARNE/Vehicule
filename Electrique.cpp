#include "Electrique.h"

Electrique::Electrique(string n, string m, string c, float vitmax, float p, float cap)
    : Voiture(n, m, c, vitmax, p), capaciteBatt(cap)
{
}

void Electrique::calculeCharge() const
{
    cout << "La charge actuelle de la batterie est d'environ "
        << (capaciteBatt * 0.8) << " kWh (80% du total)." << endl;
}

void Electrique::afficher() const
{
    Voiture::afficher();
    cout << "----> Vehicule Electrique" << endl;
    cout << "Capacité de la batterie : " << capaciteBatt << " kWh" << endl;
}

Electrique::~Electrique()
{
    cout << "Appel au destructeur de la classe Electrique." << endl;
}
