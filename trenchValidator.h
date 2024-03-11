//
// Created by Asus on 5/28/2023.
//

#ifndef A7_912_DREGHICI_BOGDAN_1_TRENCHVALIDATOR_H
#define A7_912_DREGHICI_BOGDAN_1_TRENCHVALIDATOR_H
#include "iostream"
#include "domain.h"
using namespace std;

class ValidationException{
private:
    string message;
public:
    ValidationException(string _message);
    string getMessage() const;
};

class trenchValidator {
public:
    static void validate(Trench elem);
};


#endif //A7_912_DREGHICI_BOGDAN_1_TRENCHVALIDATOR_H
