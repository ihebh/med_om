#include "medicament.h"
#include<QtSql/QSqlQuery>
#include<QVariant>
#include <QtSql/QSqlQueryModel>


medicament::medicament()
{
    nom="";  quantite=""; ref="";
}

medicament::medicament(QString nom,  QString quantite,  QString ref)

{
this->nom=nom;
this->quantite=quantite;
this->ref=ref;
}

bool medicament::ajouter()
{



            QSqlQuery query;
            query.prepare("insert into med (nom ,quantite,ref)"
                          " values(:nom,:quantite,:ref) ");
           query.bindValue(":nom", nom);
          query.bindValue(":quantite", quantite);
          query.bindValue(":ref",ref);

          return query.exec();
}

QSqlQueryModel * medicament::afficher()
{
    QSqlQueryModel *model = new QSqlQueryModel();
          model->setQuery("select * from med");
          model->setHeaderData(0, Qt::Horizontal, QObject::tr("Nom"));
          model->setHeaderData(1, Qt::Horizontal, QObject::tr("quantite"));
          model->setHeaderData(2, Qt::Horizontal, QObject::tr("ref"));

          return model;

}

bool medicament::supprimer(QString reff)
{
QSqlQuery query;
QString res3= reff;
query.prepare("Delete from med where ref =?");
query.addBindValue(res3);
return    query.exec();
}

bool medicament::modifier(QString nom, QString quantite, QString ref)
{

    QSqlQuery query;
    query.prepare("update med set nom = '"+nom+"' , quantite = '"+quantite+"'  where ref = '"+ref+"' ");
          return query.exec();
}




