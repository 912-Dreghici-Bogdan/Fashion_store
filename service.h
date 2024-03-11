//
// Created by Asus on 5/28/2023.
//

#ifndef A7_912_DREGHICI_BOGDAN_1_SERVICE_H
#define A7_912_DREGHICI_BOGDAN_1_SERVICE_H
#include "domain.h"
#include "repository.h"
#include "TrenchFromFile.h"

class Service {
private:
    Repository _repository;
    TrenchFromFile* trenches;
public:
    Service(TrenchFromFile* list);
    Repository getRepository();

    bool addTrench(int size, int price, string colour, string link);
    bool removeTrench(Trench elem);
    bool updateTrench(Trench elem, Trench new_elem);
    vector<Trench> getAll();
    ~Service();
    void saveToFile(string filename);
    void openInApp();
};


#endif //A7_912_DREGHICI_BOGDAN_1_SERVICE_H
