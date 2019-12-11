#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QMessageBox>
#include"dossier_medical.h"
#include<QSqlQuery>
#include"medicament.h"
#include<QPixmap>
#include <qsound.h>
#include<QTime>



MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{

    ui->setupUi(this);
    ui->tableView->setModel(ajtmp.afficher());
    ui->tableView_2->setModel(ajt.afficher());
    QPixmap pix("C:/Users/Riva/Desktop/Iheb_Harrath/Iheb_Harrath/Ressource/checked.png");
        int w = ui->label->width();
        int h = ui->label->height();
        ui->label->setPixmap(pix.scaled(w,h,Qt::IgnoreAspectRatio));
        QPixmap pix1("C:/Users/Riva/Desktop/Iheb_Harrath/Iheb_Harrath/Ressource/button_init.png");
            int w1 = ui->label_2->width();
            int h1 = ui->label_2->height();
            ui->label_2->setPixmap(pix1.scaled(w1,h1,Qt::IgnoreAspectRatio));
            QPixmap pix2("C:/Users/Riva/Desktop/Iheb_Harrath/Iheb_Harrath/Ressource/icon_add.png");
                int w2 = ui->label_3->width();
                int h2 = ui->label_3->height();
                ui->label_3->setPixmap(pix2.scaled(w2,h2,Qt::IgnoreAspectRatio));

                QPixmap pix3("C:/Users/Riva/Desktop/Iheb_Harrath/Iheb_Harrath/Ressource/checked.png");
                    int w3 = ui->label_4->width();
                    int h3 = ui->label_4->height();
                    ui->label_4->setPixmap(pix3.scaled(w3,h3,Qt::IgnoreAspectRatio));
ui->pushButton->setStyleSheet("border-image: url(C:/Users/Riva/Desktop/Iheb_Harrath/Iheb_Harrath/Ressource/button_init.png)3 10 3 10; font: 24pt Bahnschrift;");
QPixmap pix4("C:/Users/Riva/Desktop/Iheb_Harrath/Iheb_Harrath/Ressource/Background_color.png");
    int w4 = ui->label_5->width();
    int h4 = ui->label_5->height();
    ui->label_5->setPixmap(pix4.scaled(w4,h4,Qt::IgnoreAspectRatio));
    ui->pushButton_2->setStyleSheet("border-image: url(C:/Users/Riva/Desktop/Iheb_Harrath/Iheb_Harrath/Ressource/button_init.png)3 10 3 10; font: 24pt Bahnschrift;");
    ui->pushButton_3->setStyleSheet("border-image: url(C:/Users/Riva/Desktop/Iheb_Harrath/Iheb_Harrath/Ressource/button_init.png)3 10 3 10; font: 24pt Bahnschrift;");
    ui->pushButton_7->setStyleSheet("border-image: url(C:/Users/Riva/Desktop/Iheb_Harrath/Iheb_Harrath/Ressource/button_init.png)3 10 3 10; font: 24pt Bahnschrift;");
    QPixmap pix5("C:/Users/Riva/Desktop/Iheb_Harrath/Iheb_Harrath/Ressource/button_init.png");
        int w5 = ui->label_6->width();
        int h5 = ui->label_6->height();
        ui->label_6->setPixmap(pix5.scaled(w5,h5,Qt::IgnoreAspectRatio));

 ui->lineEdit_19->setStyleSheet("border-image: url(C:/Users/Riva/Desktop/Iheb_Harrath/Iheb_Harrath/Ressource/button_init.png)3 10 3 10; font: 24pt Bahnschrift;");
 QPixmap pix6("C:/Users/Riva/Desktop/Iheb_Harrath/Iheb_Harrath/Ressource/button_init.png");
     int w6 = ui->label_6->width();
     int h6 = ui->label_6->height();
     ui->label_6->setPixmap(pix1.scaled(w6,h6,Qt::IgnoreAspectRatio));

     QPixmap pix7("C:/Users/Riva/Desktop/Iheb_Harrath/Iheb_Harrath/Ressource/icon_edit.png");
         int w7 = ui->label_19->width();
         int h7 = ui->label_19->height();
         ui->label_19->setPixmap(pix7.scaled(w7,h7,Qt::IgnoreAspectRatio));


         QPixmap pix8("C:/Users/Riva/Desktop/Iheb_Harrath/Iheb_Harrath/Ressource/checked.png");
             int w8 = ui->label_20->width();
             int h8 = ui->label_20->height();
             ui->label_20->setPixmap(pix8.scaled(w8,h8,Qt::IgnoreAspectRatio));
             QPixmap pix9("C:/Users/Riva/Desktop/Iheb_Harrath/Iheb_Harrath/Ressource/cancel.png");
                 int w9 = ui->label_21->width();
                 int h9 = ui->label_21->height();
                 ui->label_21->setPixmap(pix9.scaled(w9,h9,Qt::IgnoreAspectRatio));
                 QPixmap pix10("C:/Users/Riva/Desktop/Iheb_Harrath/Iheb_Harrath/Ressource/Background_color.png");
                     int w10 = ui->label_22->width();
                     int h10 = ui->label_22->height();
                     ui->label_22->setPixmap(pix10.scaled(w10,h10,Qt::IgnoreAspectRatio));

                     ui->pushButton_4->setStyleSheet("border-image: url(C:/Users/Riva/Desktop/Iheb_Harrath/Iheb_Harrath/Ressource/button_init.png)3 10 3 10; font: 24pt Bahnschrift;");
                     QPixmap pix11("C:/Users/Riva/Desktop/Iheb_Harrath/Iheb_Harrath/Ressource/more.png");
                         int w11 = ui->label_26->width();
                         int h11 = ui->label_26->height();
                         ui->label_26->setPixmap(pix11.scaled(w11,h11,Qt::IgnoreAspectRatio));

                         QPixmap pix12("C:/Users/Riva/Desktop/Iheb_Harrath/Iheb_Harrath/Ressource/button_init.png");
                             int w12 = ui->label_27->width();
                             int h12 = ui->label_27->height();
                             ui->label_27->setPixmap(pix12.scaled(w12,h12,Qt::IgnoreAspectRatio));
                             QPixmap pix13("C:/Users/Riva/Desktop/Iheb_Harrath/Iheb_Harrath/Ressource/icon_add.png");
                                 int w13 = ui->label->width();
                                 int h13 = ui->label->height();
                                 ui->label->setPixmap(pix13.scaled(w13,h13,Qt::IgnoreAspectRatio));
                                 QPixmap pix14("C:/Users/Riva/Desktop/Iheb_Harrath/Iheb_Harrath/Ressource/Background_color.png");
                                     int w14 = ui->label_28->width();
                                     int h14 = ui->label_28->height();
                                     ui->label_28->setPixmap(pix14.scaled(w14,h14,Qt::IgnoreAspectRatio));
                                     ui->pushButton_5->setStyleSheet("border-image: url(C:/Users/Riva/Desktop/Iheb_Harrath/Iheb_Harrath/Ressource/button_init.png)3 10 3 10; font: 24pt Bahnschrift;");
                                     ui->pushButton_6->setStyleSheet("border-image: url(C:/Users/Riva/Desktop/Iheb_Harrath/Iheb_Harrath/Ressource/button_init.png)3 10 3 10; font: 24pt Bahnschrift;");
                                     QPixmap pix15("C:/Users/Riva/Desktop/Iheb_Harrath/Iheb_Harrath/Ressource/button_init.png");
                                         int w15 = ui->label_32->width();
                                         int h15 = ui->label_32->height();
                                         ui->label_32->setPixmap(pix15.scaled(w15,h15,Qt::IgnoreAspectRatio));
                                         QPixmap pix16("C:/Users/Riva/Desktop/Iheb_Harrath/Iheb_Harrath/Ressource/icon_edit.png");
                                             int w16 = ui->label_33->width();
                                             int h16 = ui->label_33->height();
                                             ui->label_33->setPixmap(pix16.scaled(w16,h16,Qt::IgnoreAspectRatio));
                                             QPixmap pix17("C:/Users/Riva/Desktop/Iheb_Harrath/Iheb_Harrath/Ressource/Background_color.png");
                                                 int w17 = ui->label_34->width();
                                                 int h17 = ui->label_34->height();
                                                 ui->label_34->setPixmap(pix17.scaled(w17,h17,Qt::IgnoreAspectRatio));


                             QSound::play("C:/Users/Riva/Desktop/Iheb_Harrath/Iheb_Harrath/Ressource/Opening Credits  Game of Thrones  Season 8 (HBO).wav") ;
ui->lineEdit_19->setText(QTime::currentTime().toString());
}

MainWindow::~MainWindow()
{
    delete ui;
}




void MainWindow::on_pushButton_clicked()
{
    QString taille=ui->lineEdit->text();
    QString poid=ui->lineEdit_2->text();
    QString maladie=ui->lineEdit_3->text();
    QString medecin=ui->lineEdit_4->text();
    QString remarques=ui->lineEdit_5->text();
    QString code=ui->lineEdit_6->text();
    dossier_medical R(taille, poid, maladie, medecin, remarques,code);
                bool test=R.ajouter();
                ui->tableView->setModel(ajtmp.afficher());
                QMessageBox msgBox;
                if (test)
                {
                    ui->tableView->setModel(ajtmp.afficher());
                    msgBox.setText("Ajout avec succés.");
                    msgBox.exec();
                }
}

void MainWindow::on_pushButton_2_clicked()
{ui->tableView->setModel(ajtmp.afficher());
    ui->tableView->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    QString taille=ui->lineEdit_13->text();
    QString poid=ui->lineEdit_14->text();
    QString maladie=ui->lineEdit_15->text();
    QString medecin=ui->lineEdit_16->text();
    QString remarques=ui->lineEdit_17->text();
    QString code=ui->lineEdit_18->text();

    dossier_medical dos;
    bool test=dos.modifier(taille,poid,maladie,medecin,remarques,code);
    QMessageBox msBox;
    if(test)
    {
        ui->tableView->setModel(dos.afficher());
        ui->tableView->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
        msBox.setText("modification reussite");
        msBox.exec();
    }
    else
    {
        msBox.setText("ERREUR");
        msBox.exec();
    }}



void MainWindow::on_tableView_clicked(const QModelIndex &index)
{QString val=ui->tableView->model()->data(index).toString();

    QSqlQuery qry;
    qry.prepare("select * from pro where code='"+val+"'  " );

    if(qry.exec())
    {
        while(qry.next())
        {
            ui->lineEdit_13->setText(qry.value(0).toString());
            ui->lineEdit_14->setText(qry.value(1).toString());
            ui->lineEdit_15->setText(qry.value(2).toString());
            ui->lineEdit_16->setText(qry.value(3).toString());
            ui->lineEdit_17->setText(qry.value(4).toString());
            ui->lineEdit_18->setText(qry.value(5).toString());



        }
    }

}
void MainWindow::on_pushButton_3_clicked()
{QString cc = ui->lineEdit_18->text();
    bool test=ajtmp.supprimer(cc);
    if(test)
    {ui->tableView->setModel(ajtmp.afficher());//refresh
        QMessageBox::information(nullptr, QObject::tr("Supprimer un rendez_vous"),
                    QObject::tr(" supprimé.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);

    }
    else
        QMessageBox::critical(nullptr, QObject::tr("Supprimer "),
                    QObject::tr("Erreur !.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);


}

void MainWindow::on_pushButton_4_clicked()
{           QString nom=ui->lineEdit_8->text();
            QString quantite=ui->lineEdit_9->text();
            QString ref=ui->lineEdit_7->text();

            medicament m(nom, quantite, ref );
            bool test=m.ajouter();
            ui->tableView_2->setModel(ajt.afficher());
            QMessageBox msgBox;
            if (test)
            {
                ui->tableView_2->setModel(ajt.afficher());
                msgBox.setText("Ajout avec succés.");
                msgBox.exec();
            }
}




void MainWindow::on_pushButton_5_clicked()
{

    ui->tableView_2->setModel(ajt.afficher());
        ui->tableView_2->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
        QString nom=ui->lineEdit_10->text();
        QString quantite=ui->lineEdit_11->text();
        QString ref=ui->lineEdit_12->text();

        medicament m;
        bool test=m.modifier(nom,quantite,ref);
        QMessageBox msBox;
        if(test)
        {
            ui->tableView_2->setModel(m.afficher());
            ui->tableView_2->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
            msBox.setText("modification reussite");
            msBox.exec();
        }
        else
        {
            msBox.setText("ERREUR");
            msBox.exec();
        }}

void MainWindow::on_tableView_2_clicked(const QModelIndex &index)
{
    QString val=ui->tableView_2->model()->data(index).toString();

        QSqlQuery qry;
        qry.prepare("select * from med where ref='"+val+"'  " );

        if(qry.exec())
        {
            while(qry.next())
            {
                ui->lineEdit_10->setText(qry.value(0).toString());
                ui->lineEdit_11->setText(qry.value(1).toString());
                ui->lineEdit_12->setText(qry.value(2).toString());
}}}

void MainWindow::on_pushButton_6_clicked()
{QString ref = ui->lineEdit_12->text();
    bool test=ajt.supprimer(ref);
    if(test)
    {ui->tableView_2->setModel(ajt.afficher());//refresh
        QMessageBox::information(nullptr, QObject::tr("Supprimer un rendez_vous"),
                    QObject::tr("Rendez_vous supprimé.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);

    }
    else
        QMessageBox::critical(nullptr, QObject::tr("Supprimer un rendez_vous"),
                    QObject::tr("Erreur !.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);



}

void MainWindow::on_pushButton_7_clicked()
{
    QSqlQueryModel *model = new QSqlQueryModel();
          model->setQuery("select * from pro by order code ASC");
          model->setHeaderData(0, Qt::Horizontal, QObject::tr("taille"));
          model->setHeaderData(1, Qt::Horizontal, QObject::tr("poid"));
          model->setHeaderData(2, Qt::Horizontal, QObject::tr("maladie"));
          model->setHeaderData(3, Qt::Horizontal, QObject::tr("medecin"));
          model->setHeaderData(4, Qt::Horizontal, QObject::tr("remarques"));
          model->setHeaderData(5, Qt::Horizontal, QObject::tr("code"));

}
