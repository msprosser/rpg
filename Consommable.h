#ifndef CONSOMMABLE_H
#define CONSOMMABLE_H
#include "ObjetInventaire.h"

class Consommable : public ObjetInventaire
{
public:
    Consommable();
    Consommable(QString nom, int valeur);

    // Getter
    bool getEstConsomme() const;

protected:
    bool m_estConsomme;
};

#endif // CONSOMMABLE_H
