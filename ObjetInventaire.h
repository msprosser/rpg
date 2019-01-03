#ifndef OBJETINVENTAIRE_H
#define OBJETINVENTAIRE_H
#include <QString>

class ObjetInventaire
{
public:
    ObjetInventaire();
    ObjetInventaire(QString nom, int valeur);
    virtual ~ObjetInventaire() {}

    // Getters
    QString getNom() const;
    int getValeur() const;

protected:
    QString m_nom;
    int m_valeur;
};

#endif // OBJETINVENTAIRE_H
