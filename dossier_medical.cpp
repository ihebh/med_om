#include "dossier_medical.h"
#include<QtSql/QSqlQuery>
#include<QVariant>
#include <QtSql/QSqlQueryModel>
dossier_medical::dossier_medical()
{taille="";poid="";maladie="";medecin="" ;remarques=""; code="";}
dossier_medical::dossier_medical(QString taille , QString poid , QString maladie , QString medecin , QString remarques , QString code)
{
  this->taille=taille;this->poid=poid;this->maladie=maladie;this->medecin=medecin;this->remarques=remarques;this->code=code;}
bool dossier_medical::ajouter()
{
    QSqlQuery query;
    query.prepare("insert into pro (taille , poid,maladie,medecin,remarques,code)"
                  " values(:a,:b,:c,:d,:e,:f) ");
    query.bindValue(":a",taille);
    query.bindValue(":b",poid);
    query.bindValue(":c",maladie);
    query.bindValue(":d",medecin);
    query.bindValue(":e",remarques);
    query.bindValue(":f",code);
    return query.exec();
}
QSqlQueryModel * dossier_medical::afficher()
{
    QSqlQueryModel *model = new QSqlQueryModel();
          model->setQuery("select * from pro");
          model->setHeaderData(0, Qt::Horizontal, QObject::tr("taille"));
          model->setHeaderData(1, Qt::Horizontal, QObject::tr("poid"));
          model->setHeaderData(2, Qt::Horizontal, QObject::tr("maladie"));
          model->setHeaderData(3, Qt::Horizontal, QObject::tr("medecin"));
          model->setHeaderData(4, Qt::Horizontal, QObject::tr("remarques"));
          model->setHeaderData(5, Qt::Horizontal, QObject::tr("code"));
          return model;

}
bool dossier_medical::supprimer(QString cc)
{
    QSqlQuery query;
    QString res3= cc;
    query.prepare("Delete from pro where code =?");
    query.addBindValue(res3);
    return    query.exec();
}
bool dossier_medical::modifier(QString taille, QString poid, QString maladie, QString medecin, QString remarques,QString code)
{

    QSqlQuery query;
    query.prepare("update pro set taille = '"+taille+"' , poid = '"+poid+"' , maladie = '"+maladie+"' , medecin = '"+medecin+"' , remarques = '"+remarques+"' where code = '"+code+"' ");
          return query.exec();
}








