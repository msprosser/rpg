#ifndef INTERFACEUTILISATEUR_H
#define INTERFACEUTILISATEUR_H

#include <iostream>
#include <QString>
using namespace std;

class InterfaceUtilisateur
{
public:
    InterfaceUtilisateur();
    static std::string convertQString(QString qs);
    // Dérivés de cout :
    static void afficher(std::string str);
    static void afficherLigne(std::string str);
    static void afficherQS(QString qs);
    static void afficherLigneQS(QString qs);
    static void afficherInt(int i);
    static void afficherBool(bool boolean);
    static void passerLignes(int n);

    // Dérivés de cin :
    static int demanderReponseInt();

};

#endif // INTERFACEUTILISATEUR_H
