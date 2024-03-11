//
// Created by Asus on 5/29/2023.
//

#include <fstream>
#include "GUI.h"
#include <QMainWindow>
#include <QLineEdit>
#include <QFormLayout>
#include "TrenchFromFileCSV.h"
#include "TrenchFromFileHTML.h"
#include <Qobject>

void GUI::initGUI() {
    QWidget *window = new QWidget{this};
    this->csv = new QPushButton{"CSV"};
    this->html = new QPushButton{"HTML"};
    QVBoxLayout *mainLayout = new QVBoxLayout{this};
    mainLayout->addWidget(this->csv);
    mainLayout->addWidget(this->html);
    window->setLayout(mainLayout);
    window->show();
    QObject::connect(this->csv, &QPushButton::clicked, this, &GUI::InitCSV);
    QObject::connect(this->html, &QPushButton::clicked, this, &GUI::InitHTML);
}

void GUI::InitCSV() {
    QWidget *window2 = new QWidget{};
    QVBoxLayout *modemanu = new QVBoxLayout{};
    this->admin = new QPushButton{"Admin Mode"};
    this->user = new QPushButton{"User Mode"};
    modemanu->addWidget(this->admin);
    modemanu->addWidget(this->user);
    window2->setLayout(modemanu);
    window2->show();
    hide();
    QObject::connect(this->admin, &QPushButton::clicked, this, &GUI::InitAdminCsv);
    QObject::connect(this->user, &QPushButton::clicked,this,&GUI::initUser);
}

void GUI::InitAdminCsv() {
    QWidget *window4 = new QWidget{};
    QVBoxLayout *modemanu = new QVBoxLayout{};
    this->size = new QLineEdit{};
    this->price = new QLineEdit{};
    this->quantity = new QLineEdit{};
    this->colour = new QLineEdit{};
    this->link = new QLineEdit{};
    this->newsize = new QLineEdit{};
    this->newprice = new QLineEdit{};
    this->newquantity = new QLineEdit{};
    this->newcolour = new QLineEdit{};
    this->newlink = new QLineEdit{};
    this->coatsListWidget = new QListWidget{};
    this->add = new QPushButton{"Add"};
    this->delet = new QPushButton{"Delete"};
    this->update = new QPushButton{"Update"};
    this->display = new QPushButton{"Display"};
    this->save = new QPushButton{"Save"};
    QFormLayout *form = new QFormLayout{};
    form->addRow("Size ", this->size);
    form->addRow("Price ", this->price);
    form->addRow("Quantity ", this->quantity);
    form->addRow("Colour ", this->colour);
    form->addRow("Link ", this->link);
    form->addRow("New size ", this->newsize);
    form->addRow("New price ", this->newprice);
    form->addRow("New quantity ", this->newquantity);
    form->addRow("New colour ", this->newcolour);
    form->addRow("New link ", this->newlink);
    modemanu->addWidget(this->coatsListWidget);
    modemanu->addLayout(form);
    modemanu->addWidget(this->add);
    modemanu->addWidget(this->delet);
    modemanu->addWidget(this->update);
    modemanu->addWidget(this->display);
    modemanu->addWidget(this->save);
    window4->setLayout(modemanu);
    window4->show();
    hide();
    string filename = "D:\\Faculta\\Semestrul_2\\Object_orinted_programing\\Laboratoare\\a7-912-Dreghici-Bogdan-1\\trenches.csv";
    TrenchFromFile *coats = new TrenchFromFileCSV{};
    coats->setFile(filename);

    this->populateList();
}

void GUI::populateList() {
    this->coatsListWidget->clear();
    ifstream file("D:\\Faculta\\Semestrul_2\\Object_orinted_programing\\Laboratoare\\a7-912-Dreghici-Bogdan-1\\trenches.txt");
    if (!file.is_open())
        printf("Error opening file: %s\n", strerror(errno));
    Trench trench;
    while (file >> trench) {
        service.addTrench(trench.getSize(), trench.getPrice(), trench.getColour(), trench.getLink());
    }
    file.close();
    for (auto coat: service.getAll()) {
        QString itemInList = QString::fromStdString(to_string(trench.getSize()) + ", " + to_string(trench.getPrice())
                + ", " + to_string(trench.getQuantity()) + ", " + trench.getColour() + ", " + trench.getLink());
        this->coatsListWidget->addItem(itemInList);
    }
}

void GUI::InitHTML() {
    QWidget *window2 = new QWidget{};
    QVBoxLayout *modemanu = new QVBoxLayout{};
    this->admin = new QPushButton{"Admin Mode"};
    this->user = new QPushButton{"User Mode"};
    modemanu->addWidget(this->admin);
    modemanu->addWidget(this->user);
    window2->setLayout(modemanu);
    window2->show();
    hide();
    QObject::connect(this->admin, &QPushButton::clicked, this, &GUI::InitAdminHTML);
    QObject::connect(this->user, &QPushButton::clicked,this,&GUI::initUser);

}

void GUI::InitAdminHTML() {
    QWidget *window4 = new QWidget{};
    QVBoxLayout *modemanu = new QVBoxLayout{};
    this->size = new QLineEdit{};
    this->price = new QLineEdit{};
    this->quantity = new QLineEdit{};
    this->colour = new QLineEdit{};
    this->link = new QLineEdit{};
    this->newsize = new QLineEdit{};
    this->newprice = new QLineEdit{};
    this->newquantity = new QLineEdit{};
    this->newcolour = new QLineEdit{};
    this->newlink = new QLineEdit{};
    this->coatsListWidget = new QListWidget{};
    this->add = new QPushButton{"Add"};
    this->delet = new QPushButton{"Delete"};
    this->update = new QPushButton{"Update"};
    this->display = new QPushButton{"Display"};
    this->save = new QPushButton{"Save"};
    QFormLayout *form = new QFormLayout{};
    form->addRow("Size ", this->size);
    form->addRow("Price ", this->price);
    form->addRow("Quantity ", this->quantity);
    form->addRow("Colour ", this->colour);
    form->addRow("Link ", this->link);
    form->addRow("New size ", this->newsize);
    form->addRow("New price ", this->newprice);
    form->addRow("New quantity ", this->newquantity);
    form->addRow("New colour ", this->newcolour);
    form->addRow("New link ", this->newlink);
    modemanu->addWidget(this->coatsListWidget);
    modemanu->addLayout(form);
    modemanu->addWidget(this->add);
    modemanu->addWidget(this->delet);
    modemanu->addWidget(this->update);
    modemanu->addWidget(this->display);
    modemanu->addWidget(this->save);
    window4->setLayout(modemanu);
    window4->show();
    hide();
    string filename = "D:\\Faculta\\Semestrul_2\\Object_orinted_programing\\Laboratoare\\a7-912-Dreghici-Bogdan-1\\trenches.html";
    TrenchFromFile *coats = new TrenchFromFileHTML{};
    coats->setFile(filename);
    this->populateList();
}

void GUI::initUser() {

}

