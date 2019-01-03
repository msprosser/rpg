#include "ObjetInventaire.h"

ObjetInventaire::ObjetInventaire()
{
}

ObjetInventaire::ObjetInventaire(QString nom, int valeur) : m_nom(nom), m_valeur(valeur)
{
}

// Getters :
QString ObjetInventaire::getNom() const
{
    return m_nom;
}

int ObjetInventaire::getValeur() const
{
    return m_valeur;
}
