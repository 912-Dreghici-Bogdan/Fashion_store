//
// Created by Asus on 5/28/2023.
//

#ifndef A7_912_DREGHICI_BOGDAN_1_UI_H
#define A7_912_DREGHICI_BOGDAN_1_UI_H
#include "service.h"
#include "repository.h"

class UiException : public std::exception {
private:
    string message;

public:
    UiException(const string &s) : message{s} {}

    const char *what() const throw() override {
        return this->message.c_str();
    }
};

class Ui {
private:
    Service _service;
    string filename;
    Repository shopinBag;
public:
    //constructor
    Ui(Service service,string f): _service(service) {
            this->filename = f;
    }
    //destructor
    ~Ui();
    //generates 10 entries
    void hardCodedEntries();
    //???
    void menu1();
    //administrators options
    void adminMenu();
    //gestionare admin
    void adminUser();
    //users options
    void userMenu();
    //gestionare user
    void userUser();
    //chooses what mode should the person be in
    void start();
    void Fromfile();
    void ToFile();
    void displaySoppingCart();
};


#endif //A7_912_DREGHICI_BOGDAN_1_UI_H
