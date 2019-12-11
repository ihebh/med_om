#ifndef MEDICAMENT_H
#define MEDICAMENT_H


#include<QString>
#include <QtSql/QSqlQueryModel>


class medicament
{

    QString nom,quantite , ref;

 public:
    medicament();
    medicament(QString ,QString,QString);


    bool ajouter();
        QSqlQueryModel * afficher();
    bool supprimer(QString);
    bool modifier(QString, QString, QString);
        ~ medicament(){}
};


#endif // MEDICAMENT_H
