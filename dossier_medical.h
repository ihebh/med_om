#ifndef DOSSIER_MEDICAL_H
#define DOSSIER_MEDICAL_H
#include<QString>
#include<QSqlQueryModel>
class dossier_medical
{QString taille, poid, maladie,medecin ,remarques ,code;
public:
    dossier_medical();
    dossier_medical(QString,QString,QString,QString,QString,QString);
    bool ajouter();
    QSqlQueryModel * afficher();

    bool supprimer(QString) ;
    bool modifier(QString, QString, QString, QString, QString,QString);
    ~dossier_medical(){}
};
#endif // DOSSIER_MEDICAL_H

