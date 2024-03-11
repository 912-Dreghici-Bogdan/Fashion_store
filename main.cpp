//
// Created by Asus on 5/28/2023.
//
#include <QApplication>
#include "GUI.h"
#include "Ui.h"
#include <vector>
#include "TrenchFromFileCSV.h"
#include "TrenchFromFileHTML.h"

int main(int argc, char *argv[]){
    QApplication a(argc, argv);
    Repository repository;
    TrenchFromFile* list;
    Service service(list);
    GUI window(service);
    window.show();
    return QApplication::exec();
}