#include "InterfaceUtilisateur.h"

InterfaceUtilisateur::InterfaceUtilisateur()
{
    InterfaceUtilisateur::afficherLigne("Bienvenue dans \"Aventures\"");
}

void InterfaceUtilisateur::passerLignes(int n) {
    for (int i = 0; i < n; i++) {
        cout << endl;
    }
}

std::string InterfaceUtilisateur::convertQString(QString qs)
{
    return qs.toLocal8Bit().constData();
}

void InterfaceUtilisateur::afficherLigne(std::string str)
{
    cout << str << endl;
}

void InterfaceUtilisateur::afficherLigneQS(QString qs)
{
    cout << InterfaceUtilisateur::convertQString(qs) << endl;
}
void InterfaceUtilisateur::afficher(std::string str)
{
    cout << str;
}

void InterfaceUtilisateur::afficherQS(QString qs)
{
    cout << InterfaceUtilisateur::convertQString(qs);
}

void InterfaceUtilisateur::afficherInt(int i)
{
    cout << i;
}

void InterfaceUtilisateur::afficherBool(bool boolean)
{
    cout << boolean;
}

int InterfaceUtilisateur::demanderReponseInt()
{
    int reponseUtilisateur;
    cin >> reponseUtilisateur;
    return reponseUtilisateur;
}
