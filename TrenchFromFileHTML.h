//
// Created by Asus on 5/28/2023.
//

#ifndef A7_912_DREGHICI_BOGDAN_1_TRENCHFROMFILEHTML_H
#define A7_912_DREGHICI_BOGDAN_1_TRENCHFROMFILEHTML_H
#include "TrenchFromFile.h"

class TrenchFromFileHTML:
        public TrenchFromFile{
public:
    void toFile() override;
    void showFile() override;

};


#endif //A7_912_DREGHICI_BOGDAN_1_TRENCHFROMFILEHTML_H
