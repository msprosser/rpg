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

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    InterfaceUtilisateur ui;

    Arme epee("Epee des Mille Verites", 10);
    Humain joueur(QString("Bob"), 70, 75, 20, 6, &epee);
//    joueur.equiperMainDroite(epee);
    Arme lance("Longue du zboub", 8);
    Humain garde1(QString("Garde"), 45, 55, 20, 0, &lance);

    joueur.afficherCaracteristiques();
    joueur.afficherEtat();

    ui.passerLignes(1);

    Duel duel1(joueur, garde1);

    duel1.executer();

    joueur.afficherEtat();
    garde1.afficherEtat();

    return a.exec();
}
