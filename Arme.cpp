#include "Arme.h"

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
int Arme::infligerDegats(int jetD6) {
    return m_degats + jetD6;
}
Arme* Arme::getPointer()
{
    return this;
}
