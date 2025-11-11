#include "Classic.h"

Classic::Classic(string n, string m, string c, float vitmax, float p, float Qtef)
    : Voiture(n, m, c, vitmax, p), Qte_fuel(Qtef)
{
}

void Classic::calculerFuel() const
{
    cout << "Consommation estimée : " << (Qte_fuel / 10.0)
        << " litres pour 100 km (estimation)." << endl;
}

void Classic::afficher() const
{
    Voiture::afficher();
    cout << "----> Vehicule Classique" << endl;
    cout << "Quantité de carburant : " << Qte_fuel << " L" << endl;
}

Classic::~Classic()
{
    cout << "Appel au destructeur de la classe Classic." << endl;
}
