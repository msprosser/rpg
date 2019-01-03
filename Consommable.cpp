#include "Consommable.h"
#include "InterfaceUtilisateur.h"

Consommable::Consommable()
{
}

Consommable::Consommable(QString nom, int valeur,int bonusVie, int bonusPsy) :
    ObjetInventaire(nom, valeur),
    m_bonusVie(bonusVie),
    m_bonusPsy(bonusPsy)
{
}

void Consommable::consommer()
{
    // delete
}

// Getters

int Consommable::getBonusVie() const
{
    return m_bonusVie;
}

int Consommable::getBonusPsy() const
{
    return m_bonusPsy;
}

// Printers
void Consommable::decrire()
{
    InterfaceUtilisateur::afficherLigne("Consommable: ");
    InterfaceUtilisateur::afficher("Nom: ");
    InterfaceUtilisateur::afficherLigneQS(m_nom);
    InterfaceUtilisateur::afficher("Valeur (pieces d'or): ");
    InterfaceUtilisateur::afficherInt(m_valeur);
    InterfaceUtilisateur::passerLignes(1);
    InterfaceUtilisateur::afficher("Bonus Vie: ");
    InterfaceUtilisateur::afficherInt(m_bonusVie);
    InterfaceUtilisateur::passerLignes(1);
    InterfaceUtilisateur::afficher("Bonus Psy: ");
    InterfaceUtilisateur::afficherInt(m_bonusPsy);
    InterfaceUtilisateur::passerLignes(1);
}
