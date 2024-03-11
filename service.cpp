//
// Created by Asus on 5/28/2023.
//

#include "service.h"
Repository Service::getRepository() {
    return this->_repository;
}

Service::Service(TrenchFromFile *list) : _repository(Repository()), trenches(list) {}

bool Service::addTrench(int size, int price, string colour, string link) {
    Trench trench2(size, price, 1, colour, link);
    try {
        //this->trenches->add(trench2);
        this->_repository.add(trench2);
    }
    catch (RepositoryException& exception){
        throw;
    }
    return true;
}

bool Service::removeTrench(Trench elem) {
    bool ok = this->_repository.remove(elem);
    this->trenches->remove(elem);
    return ok;
}

Service::~Service() {}

vector<Trench> Service::getAll() {
    return this->_repository.getAllTrenches();
}

bool Service::updateTrench(Trench elem, Trench new_elem) {
    this->trenches->update(elem, new_elem);
    return this->_repository.update(elem, new_elem);
}

void Service::saveToFile(string filename) {
    if(this->trenches == nullptr)
        return;
    this->trenches->setFile(filename);
    this->trenches->toFile();
}

void Service::openInApp() {
    if(this->trenches == nullptr)
        return;
    this->trenches->showFile();
}

