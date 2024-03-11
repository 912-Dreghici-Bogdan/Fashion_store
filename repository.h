//
// Created by Asus on 5/28/2023.
//

#ifndef A7_912_DREGHICI_BOGDAN_1_REPOSITORY_H
#define A7_912_DREGHICI_BOGDAN_1_REPOSITORY_H
#include "domain.h"
#include "vector"

class RepositoryException : public std::exception
{
private:
    string message;

public:
    RepositoryException(const string& s) : message{s } {}

    const char* what() const throw() override {
        return this->message.c_str();
    }
};
class Repository {
protected:
    vector<Trench> trenches;

public:
    //constructor
    Repository();
    //destructor
    ~Repository();
    //adds an element to the repository
    bool add(Trench elem);
    //removes an element from the repository
    bool remove(Trench elem);
    //updates an element from the repository
    bool update(Trench elem, Trench newElem);
    //returns the list of trenches
    vector<Trench> getAllTrenches();
    //DynamicVector<Trench> getAllTrenches();

};

#endif //A7_912_DREGHICI_BOGDAN_1_REPOSITORY_H
