#include "Consommable.h"

Consommable::Consommable()
{
}

Consommable::Consommable(QString nom, int valeur) : ObjetInventaire(nom, valeur), m_estConsomme(false)
{
}

// Getters
bool Consommable::getEstConsomme() const
{
    return m_estConsomme;
}
