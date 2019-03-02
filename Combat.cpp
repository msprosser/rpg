#include "Combat.h"

Combat::Combat() :
    m_tour(0),
    m_estFini(false),
    m_nbAllies(0),
    m_nbEnnemis(0),
    m_nbParticipants(1),
    m_joueur(),
    m_allies(vector<Personnage>(0)), // les allies ne comprennent pas le joueur lui-meme
    m_ennemis(vector<Personnage>(0)),
    m_participants(vector<Personnage>(0))
{

}

Combat::Combat(Personnage& joueur, vector<Personnage>& ennemis) :
    m_tour(0),
    m_estFini(false),
    m_nbAllies(0),
    m_nbEnnemis(ennemis.size()),
    m_nbParticipants(m_nbAllies + m_nbEnnemis + 1),
    m_joueur(joueur),
    m_allies(vector<Personnage>(0)), // les allies ne comprennent pas le joueur lui-meme
    m_ennemis(ennemis),
    m_participants(vector<Personnage>(m_nbParticipants))
{
    auto it = m_participants.begin();
    m_participants.insert(it, m_joueur);
    m_participants.insert(it, m_ennemis.begin(), m_ennemis.end());
}

Combat::Combat(Personnage& joueur, vector<Personnage>& allies, vector<Personnage>& ennemis) :
    m_tour(0),
    m_estFini(false),
    m_nbAllies(allies.size()),
    m_nbEnnemis(ennemis.size()),
    m_nbParticipants(m_nbAllies + m_nbEnnemis + 1),
    m_joueur(joueur),
    m_allies(allies),
    m_ennemis(ennemis),
    m_participants(vector<Personnage>(static_cast<std::size_t>(m_nbParticipants)))
{
    auto it = m_participants.begin();
    m_participants.insert(it, m_joueur);
    m_participants.insert(it, m_ennemis.begin(), m_ennemis.end());
    m_participants.insert(it, m_allies.begin(), m_allies.end());
}

Combat::~Combat()
{

}

void Combat::updateEstFini() // Fonction a revoir !!
{
    // Joueur
    if (m_joueur.getVie() == 0) {
//        return true; // Si le joueur est mort, la partie est Game Over, donc notamment le combat peut s'arreter
    }
    // Les ennemis
    for (int i = 0; i < m_nbEnnemis; i++) {
        if(m_ennemis[i].getVie() > 0) {
//            return false;
        }
    }
    // Si on a pu trouver aucun ennemi encore debout, c'est que le combat est gagné !
    // NB: inutile de regarder l'état des alliés
//    return true;
}

void Combat::updateTour()
{
    m_tour++;
}

vector<Personnage> Combat::getAdversaires(Personnage attaquant) {
    vector<Personnage> adversaires;

    return adversaires;
}

void Combat::initializeParticipants()
{
    // temporaire, intelligence plus tard
    m_participants[0] = m_joueur;
    m_participants[1] = m_ennemis[0];
}


// Fonction essentielle : Avancer, signifie qu'on execute toutes les actions necessaires a l'avancee d'un tour
void Combat::avancer()
{
    for (int i = 0; i < m_nbParticipants; i++) {
        // if not me ; if not ded
        if (m_participants[i].getVie() > 0) {
            // Les personnages tués dans un tour précédents, ou plus tôt ce tour ci n'ont plus le droit de taper aui aue ce soit :P
            if (m_participants[i].getNom() != m_joueur.getNom()) { // TODO: Change this test and  add estJoueur sur le Personnage, et faire le test là dessus
                // Les actions du joueur sont gérées différemment, ici on s'intéresse aux PNJ
//                Personnage cible = m_participants[i].choisirCible(this->getAdversaires(m_participants[i]));
//                m_participants[i].attaquer(cible);
            }
            else {
                // C'est au tour du joueur
                // temporaire: le joueur est géré comme les autres
//                Personnage cible = m_participants[i].choisirCible(this->getAdversaires(m_participants[i]));
//                m_participants[i].attaquer(cible);
            }
        }
    }
}

// Fonction principale : Executer le combat
void Combat::executer()
{
    while (!m_estFini) {
        this->avancer();
        this->updateTour();
        this->updateEstFini();
        this->decrireEtatActuel();
    }
}

// Printer
void Combat::afficherTour() const {
    InterfaceUtilisateur::afficher("Tour ");
    InterfaceUtilisateur::afficherInt(m_tour);
}

void Combat::decrireEtatActuel() const {

}
