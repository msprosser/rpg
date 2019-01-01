#include "Duel.h"

Duel::Duel(Humain &joueur, Humain &ennemi) : m_joueur(joueur), m_ennemi(ennemi)
{
    m_estFini = false;
}

void Duel::initializeParticipants()
{
    if (m_joueur.faireJetInitiative() < m_ennemi.faireJetInitiative()) {
        estPremierJoueur = false;
    } else {estPremierJoueur = true;}
}

void Duel::updateEstFini()
{
    if ((m_joueur.getVie() == 0) || (m_ennemi.getVie() == 0)) {
        m_estFini = true;
    }
}


void Duel::avancer()
{
    m_joueur.attaquer(m_ennemi);
    m_ennemi.attaquer(m_joueur);
    m_joueur.afficherEtat();
    m_ennemi.afficherEtat();
}

void Duel::executer()
{
    while (!m_estFini) {
        this->avancer();
        this->updateTour();
        this->updateEstFini();
        this->decrireEtatActuel();
    }
    InterfaceUtilisateur::afficherLigne("Le combat est fini");
}
