#pragma once
#include "Voiture.h"
#include <iostream>
using namespace std;

class Classic : public Voiture
{
private:
    float Qte_fuel; // litres

public:
    Classic(string = "", string = "", string = "", float = 0.0, float = 0.0, float = 0.0);

    void calculerFuel() const;
    virtual void afficher() const override;
    virtual ~Classic();
};
