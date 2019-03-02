#include "Personnage.h"

Personnage::Personnage() :
    m_nom(),
    m_physique(0),
    m_mental(0),
    m_vie(0),
    m_psy(0),
    m_degats(0)
{
}

Personnage::Personnage(QString nom) :
    m_nom(nom),
    m_physique(0),
    m_mental(0),
    m_vie(0),
    m_psy(0),
    m_degats(0)
{
}

Personnage::Personnage(QString nom, int physique, int mental, int vie, int psy) :
    m_nom(nom),
    m_physique(physique),
    m_mental(mental),
    m_vie(vie),
    m_psy(psy),
    m_degats(0)
{
}

// Jets :
int Personnage::jeterD100()
{
    int jetD100 = De::jeter(100);
    cout << "D100 (" << m_nom.toLocal8Bit().constData() << "): " << jetD100 << endl;
    return jetD100;
}
int Personnage::jeterD6()
{
    int jetD6 = De::jeter(6);
    cout << "D6 (" << m_nom.toLocal8Bit().constData() << "): " << jetD6 << endl;
    return jetD6;
}
bool Personnage::reussirJetPhysique()
{
    int jetD100 = jeterD100();
    return ((m_physique - jetD100) > 0);
}
bool Personnage::reussirJetMental()
{
    int jetD100 = jeterD100();
    return ((m_mental - jetD100) > 0);
}
int Personnage::faireJetInitiative()
{
    int jetInitiative = jeterD6() * (m_mental + m_physique) / 12;
    cout << "Jet d'initiative (" << m_nom.toLocal8Bit().constData() << "): " << jetInitiative << endl;
    return jetInitiative;

}

// Méthodes de combat
void Personnage::recevoirDegats(int nbDegats)
{
    m_vie -= nbDegats;
    //On enlève le nombre de dégâts reçus à la vie du personnage
    if (m_vie < 0) //Pour éviter d'avoir une vie négative
    {
        m_vie = 0; //On met la vie à 0 (cela veut dire mort)
    }
}

Personnage Personnage::choisirCible(vector<Personnage> adversaires) {
    // V0: On renvoie juste le premier personnage, on ajoutera de l'intelligence plus tard
    return adversaires[0];
}


// Getters :
QString Personnage::getNom() const
{
    return m_nom;
}
int Personnage::getVie() const
{
    return m_vie;
}
int Personnage::getPsy() const
{
    return m_psy;
}
int Personnage::getPhysique() const
{
    return m_physique;
}
int Personnage::getMental() const
{
    return m_mental;
}
int Personnage::getDegats() const
{
    return m_degats;
}

// Setters :

// Printers :
void Personnage::afficherNom() const
{
    InterfaceUtilisateur::afficherQS(m_nom);
}
void Personnage::afficherLigneNom() const
{
    InterfaceUtilisateur::afficherLigneQS(m_nom);
}
void Personnage::afficherVie() const
{
    this->afficherNom();
    InterfaceUtilisateur::afficher(" : ");
    InterfaceUtilisateur::afficherInt(m_vie);
    InterfaceUtilisateur::afficherLigne(" PV."); // On utilise afficherLigne, car fini par un passage à la ligne
}
void Personnage::afficherPsy() const
{
    this->afficherNom();
    InterfaceUtilisateur::afficher(" : ");
    InterfaceUtilisateur::afficherInt(m_psy);
    InterfaceUtilisateur::afficherLigne(" points de psy."); // On utilise afficherLigne, car fini par un passage à la ligne
}
void Personnage::afficherEtat() const
{
    this->afficherVie();
    this->afficherPsy();
}
void Personnage::afficherCaracteristiques() const
{
    this->afficherLigneNom();
    InterfaceUtilisateur::afficher("Physique : ");
    InterfaceUtilisateur::afficherInt(m_physique);
    InterfaceUtilisateur::afficher(" || Mental : ");
    InterfaceUtilisateur::afficherInt(m_mental);
    InterfaceUtilisateur::passerLignes(1);
}
