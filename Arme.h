#ifndef ARME_H
#define ARME_H
#include "Equipement.h"

class Arme : public Equipement
{
public:
    Arme();
    Arme(QString nom, int valeur, int degats);
    int infligerDegats(int jetD6);

    // Getter
    int getDegats() const;

protected:
    int m_degats;
};

#endif // ARME_H
