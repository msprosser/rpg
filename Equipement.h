#ifndef EQUIPEMENT_H
#define EQUIPEMENT_H
#include <QString>

class Equipement
{
public:
    Equipement();
    Equipement(QString nom);
    Equipement(bool estContondant);
    virtual ~Equipement();

    // Getter:
    bool getEstVide() const;
    bool getEstContondant() const;
    QString getNom() const;
    virtual int infligerDegats() = 0;

protected:
    QString m_nom;
    int m_valeur;
    bool m_estContondant;
    int m_degats;
    bool m_estVide; // est mis à vrai quand aucune autre info n'est renseignée
};

#endif // EQUIPEMENT_H
