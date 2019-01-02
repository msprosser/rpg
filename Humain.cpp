#include "Humain.h"
Humain::Humain() : m_equipementMainDroite(nullptr)
{
    //m_equipementMainDroite = new Equipement();
}

Humain::Humain(Personnage const& PersonnageACopier) : m_equipementMainDroite(nullptr)
{
    m_nom = PersonnageACopier.getNom();
    m_vie = PersonnageACopier.getVie();
    m_psy = PersonnageACopier.getPsy();
    m_physique = PersonnageACopier.getPhysique();
    m_mental = PersonnageACopier.getMental();
    m_degats = PersonnageACopier.getDegats();
    m_d100 = PersonnageACopier.getD100();
}

Humain::Humain(QString nom, int physique, int mental, int vie, int psy, Arme* arme) :
    m_nom(nom),
    m_physique(physique),
    m_mental(mental),
    m_vie(vie),
    m_psy(psy),
    m_equipementMainDroite(arme)
{
    m_degats = 1;
}
// Nécessaire de surcharger le constructeur pour désallouer la mémoire occupée par les pointeurs
Humain::~Humain()

{
    delete m_equipementMainDroite;
}
// Nécessaire de surcharger l'opérateur= à cause des pointeurs
Humain& Humain::operator=(Humain const& humainACopier)
{
    if(this != &humainACopier)
    //On vérifie que l'objet n'est pas le même que celui reçu en argument
    {
        m_vie = humainACopier.m_vie; //On copie tous les champs
        m_psy = humainACopier.m_psy;

        delete m_equipementMainDroite;
        m_equipementMainDroite = new Equipement(*(humainACopier.m_equipementMainDroite));

    }

    return *this; //On renvoie l'objet lui-même

}

void Humain::attaquer(Personnage &cible)
{
    if(Humain::reussirJetPhysique()) {
        cout << "Attaque : Jet physique Reussi !" << endl;

        if ((m_equipementMainDroite != 0) && (!m_equipementMainDroite->getEstVide())) { // L'humain qui attaque possède un item d'équipement dans sa main droite
            if (m_equipementMainDroite->getEstContondant()) { // cet item peut infliger des dégats
                cout << "Attaquant est armee (" << m_equipementMainDroite->getNom().toLocal8Bit().constData() << ")" << endl;
                cible.recevoirDegats(m_equipementMainDroite->infligerDegats(Humain::jeterD6()));
            }
            else {
                // L'attaquant attaqué alors qu'il avait un objet inoffensif dans la main, comme par exemple la partie sporadique du fenouil !
                cout << "Attaquant a les mains prises et ne peut pas blesser l'adversaire" << endl;
            }
        }
        else {
            cout << Humain::m_nom.toLocal8Bit().constData() <<" y va a mains nues !" << endl;
            cible.recevoirDegats(Humain::m_degats);
        }

    }
    else {
        cout << "Attaque : Jet physique rate" << endl;
    }
}

void Humain::equiperMainDroite(Equipement* equipementAEquiper)
{
    m_equipementMainDroite = equipementAEquiper;
}

void Humain::equiperMainDroite(Arme* equipementAEquiper)
{
    m_equipementMainDroite = equipementAEquiper;
}
