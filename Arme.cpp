#include "Arme.h"
#include "De.h"

Arme::Arme()
{
    m_estContondant = true;

}
Arme::Arme(int degats)
{
    m_estContondant = true;
    m_estVide = false;
    m_degats = degats;

}
Arme::Arme(QString nom, int degats)
{
    m_nom = nom;
    m_degats = degats;
    m_estContondant = true;
    m_estVide = false;
}
int Arme::infligerDegats()
{
    return m_degats + De::jeter(6);
}
