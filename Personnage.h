#ifndef PERSONNAGE_H
#define PERSONNAGE_H
#include <QString>
#include "Equipement.h"
#include "Arme.h"
#include "De.h"
#include <cmath>
#include <iostream>
#include <vector>

#include "InterfaceUtilisateur.h"

class Personnage
{
public:
    Personnage();
    Personnage(QString nom);

protected:
    Personnage(QString nom, int physique, int mental, int vie, int psy);

public:
    int jeterD100();
    int jeterD6();
    bool reussirJetPhysique();
    bool reussirJetMental();
    int faireJetInitiative();
    void recevoirDegats(int nbDegats);
    void attaquer(Personnage &cible);
    Personnage choisirCible(vector<Personnage> adversaires);

    // Getters :
    QString getNom() const;
    int getVie() const;
    int getPsy() const;
    int getPhysique() const;
    int getMental() const;
    int getDegats() const;

    // Setters :

    // Printers :
    void afficherNom() const;
    void afficherLigneNom() const;
    void afficherVie() const;
    void afficherPsy() const;

    void afficherEtat() const;
    void afficherCaracteristiques() const;

protected:
    QString m_nom;
    int m_physique;
    int m_mental;
    int m_vie;
    int m_psy;
    int m_degats; // Les degats que peut infliger le personnage 'nu'
};


#endif // PERSONNAGE_H
