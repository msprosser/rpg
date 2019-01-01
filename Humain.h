#ifndef HUMAIN_H
#define HUMAIN_H
#include <QString>
#include "Personnage.h"
#include "Equipement.h"
#include "Arme.h"
#include "De.h"

class Humain : public Personnage
{
public:
    Humain();
    ~Humain();
    Humain(Personnage const& PersonnageACopier); // Le prototype du constructeur de copie, nécessaire dès lors qu'on utilise un pointeur
    Humain(QString nom, int physique, int mental, int vie, int psy);
    Humain& operator=(Humain const& humainACopier);

    void attaquer(Personnage &cible);
    void equiperMainDroite(Equipement* equipementAEquiper);
    void equiperMainDroite(Arme* armeAEquiper);


protected:
    Equipement* m_equipementMainDroite;
};

#endif // HUMAIN_H
