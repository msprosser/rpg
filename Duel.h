#ifndef DUEL_H
#define DUEL_H

#include "Combat.h"
#include "Humain.h"
#include "InterfaceUtilisateur.h"

class Duel : public Combat
{
public:
    Duel(Humain &joueur, Humain &ennemi);
    void initializeParticipants();
    void avancer(); // avance le combat d'un tour
    void executer();
    void updateEstFini();

private:
    Humain m_joueur;
    Humain m_ennemi;
    bool estPremierJoueur;
};

#endif // DUEL_H
