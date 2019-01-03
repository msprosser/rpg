#include "Equipement.h"
#include <cmath>

Equipement::Equipement()
{
}


Equipement::Equipement(QString nom, int valeur) : ObjetInventaire(nom, valeur)
{
}

// Getters
bool Equipement::getEstEquipe() const
{
    return m_estEquipe;
}
