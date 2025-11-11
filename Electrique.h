#pragma once
#include "Voiture.h"
#include <iostream>
using namespace std;

class Electrique : public Voiture
{
private:
    float capaciteBatt; // kWh

public:
    Electrique(string = "", string = "", string = "", float = 0.0, float = 0.0, float = 0.0);

    void calculeCharge() const;
    virtual void afficher() const override;
    virtual ~Electrique();
};
