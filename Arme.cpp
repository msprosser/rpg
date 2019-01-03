#include "Arme.h"

Arme::Arme()
{
}
Arme::Arme(QString nom, int valeur, int degats) : Equipement(nom, valeur), m_degats(degats)
{
}


int Arme::infligerDegats(int jetD6) {
    return m_degats + jetD6;
}

// Getters :
int Arme::getDegats() const
{
    return m_degats;
}
