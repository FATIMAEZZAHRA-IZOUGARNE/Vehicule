#pragma once
#include "Vehicule.h"
#include <iostream>
using namespace std;

class Voiture : public Vehicule
{
private:
    float vitesseMax;
    float poids;

public:
    Voiture(string = "", string = "", string = "", float = 0.0, float = 0.0);
    virtual void afficher() const override;
    virtual void arreter() const override;
    virtual void demarrer() const override;
    virtual ~Voiture();
};

