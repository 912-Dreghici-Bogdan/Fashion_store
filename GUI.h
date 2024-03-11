//
// Created by Asus on 5/29/2023.
//

#ifndef A7_912_DREGHICI_BOGDAN_1_GUI_H
#define A7_912_DREGHICI_BOGDAN_1_GUI_H
#include <qwidget.h>
#include <QArgument>
#include <QWidget>
#include <QListWidget>
#include <QPushButton>
#include <QLabel>
#include <QVBoxLayout>
#include <QMainWindow>
#include "service.h"


class GUI :public QWidget {
    Q_OBJECT
private:
    Service& service;
    QPushButton *html, *csv;
    QPushButton *admin,*user;
    QLineEdit *size, *price, *quantity, *colour, *link;
    QLineEdit *newsize, *newprice, *newquantity, *newcolour, *newlink;
    QPushButton *add,*delet,*update,*display,*save;
    QListWidget* coatsListWidget;

    void initGUI();
    void InitCSV();
    void InitHTML();
    void InitAdminCsv();
    void populateList();
    void InitAdminHTML();
    void initUser();

public:
    GUI(Service& service):service {service}{
        this->initGUI();
    }
};


#endif //A7_912_DREGHICI_BOGDAN_1_GUI_H
