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
    bool getEstConsomme() const;
    int getBonusVie() const;
    int getBonusPsy() const;

    // Printers :
    void decrire();

protected:
    bool m_estConsomme;
    int m_bonusVie;
    int m_bonusPsy;
};

#endif // CONSOMMABLE_H
