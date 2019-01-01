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
    Humain joueur("Bob", 70, 75, 20, 6);
    joueur.equiperMainDroite(epee);

    Humain garde1("Garde", 45, 55, 20, 0);

    joueur.afficherCaracteristiques();
    joueur.afficherEtat();

    ui.passerLignes(1);

    Duel duel1(joueur, garde1);

    duel1.executer();

    joueur.afficherEtat();
    garde1.afficherEtat();

    return a.exec();
}
