//
// Created by Asus on 5/28/2023.
//

#ifndef A7_912_DREGHICI_BOGDAN_1_TRENCHFROMFILE_H
#define A7_912_DREGHICI_BOGDAN_1_TRENCHFROMFILE_H
#include "repository.h"

class TrenchFromFile :
        public Repository
        {
protected:
    string filename;
public:
    TrenchFromFile();
    virtual ~TrenchFromFile() {}
    void setFile(const string& filename);
    virtual void toFile() = 0;
    virtual void showFile() = 0;
};


#endif //A7_912_DREGHICI_BOGDAN_1_TRENCHFROMFILE_H
