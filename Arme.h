#ifndef ARME_H
#define ARME_H
#include "Equipement.h"

class Arme : public Equipement
{
public:
    Arme();
    Arme(int degats);
    Arme(QString nom, int degats);
    int infligerDegats();

private:
    int m_degats;
};

#endif // ARME_H
