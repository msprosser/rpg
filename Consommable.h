#ifndef CONSOMMABLE_H
#define CONSOMMABLE_H
#include "ObjetInventaire.h"

class Consommable : public ObjetInventaire
{
public:
    Consommable();
    Consommable(QString nom, int valeur, int bonusVie, int bonusPsy);

    void consommer();

    // Getters :
    int getBonusVie() const;
    int getBonusPsy() const;

    // Printers :
    void decrire();

protected:
    int m_bonusVie;
    int m_bonusPsy;
};

#endif // CONSOMMABLE_H
