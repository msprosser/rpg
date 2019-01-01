#include "Equipement.h"

Equipement::Equipement()
{
    m_estVide = true;
}


Equipement::Equipement(QString nom)
{
    m_nom = nom;
    m_estContondant = false;
    m_estVide = false;
}

Equipement::Equipement(bool estContondant)
{
    m_estContondant = estContondant;
    m_estVide = false;
}

int Equipement::infligerDegats(int jetD6) {
    return m_degats + round(jetD6 / 6);
}

// Getters :
bool Equipement::getEstVide() const
{
    return m_estVide;
}

bool Equipement::getEstContondant() const
{
    return m_estContondant;
}

QString Equipement::getNom() const
{
    return m_nom;
}

Equipement* Equipement::getPointer() {
    return this;
}

