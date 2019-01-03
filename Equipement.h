#ifndef EQUIPEMENT_H
#define EQUIPEMENT_H
#include <QString>
#include "ObjetInventaire.h"

class Equipement : public ObjetInventaire
{
public:
    Equipement();
    Equipement(QString nom, int valeur);

    // Getter
    bool getEstEquipe() const;

protected:
    bool m_estEquipe;
};

#endif // EQUIPEMENT_H
