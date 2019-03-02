#ifndef COMBAT_H
#define COMBAT_H

#include <vector>
#include "Personnage.h"

// Classe de combats en tour par tour

class Combat
{
public:
    Combat();
    Combat(Personnage& joueur, vector<Personnage>& ennemis);
    Combat(Personnage& joueur, vector<Personnage>& allies, vector<Personnage>& ennemis);
    virtual ~Combat();

    virtual void updateEstFini();
    void updateTour();
    vector<Personnage> getAdversaires(Personnage attaquant);
    void initializeParticipants();
    virtual void avancer(); // avance le combat d'un tour
    virtual void executer(); // successions d'avancees de tours

    // Getter
    bool getEstFini() const;
    int getTour() const;

    // Printer :
    void afficherTour() const;
    void decrireEtatActuel() const;

protected:
    unsigned int m_tour; // numero du tour en cours
    bool m_estFini;
    unsigned long m_nbAllies;
    unsigned long m_nbEnnemis;
    unsigned long m_nbParticipants;
    Personnage m_joueur;
    vector<Personnage> m_allies;
    vector<Personnage> m_ennemis;
    vector<Personnage> m_participants; // dans l'ordre de passage dans le tour
};

#endif // COMBAT_H
