#include <QCoreApplication>
#include <iostream>
#include <QString>
#include <cmath>
#include <vector>
using namespace std;

#include "InterfaceUtilisateur.h"
#include "De.h"
#include "Personnage.h"
#include "Humain.h"
#include "Equipement.h"
#include "Arme.h"
#include "Combat.h"
#include "Duel.h"
#include "Consommable.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    InterfaceUtilisateur ui;

    Arme epee("Epee des Mille Verites", 0, 10);

    Humain joueur(QString("Bob"), 70, 75, 20, 6, &epee);
    Arme lance("Longue du zboub", 0, 8);
    Humain garde1(QString("Garde"), 45, 55, 20, 0, &lance);
    Consommable potion1("Petite Potion", 5, 3, 0);
    potion1.decrire();

    joueur.afficherCaracteristiques();
    joueur.afficherEtat();

    garde1.afficherCaracteristiques();
    garde1.afficherEtat();

    return a.exec();
}
