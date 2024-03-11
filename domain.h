//
// Created by Asus on 5/28/2023.
//

#ifndef A7_912_DREGHICI_BOGDAN_1_DOMAIN_H
#define A7_912_DREGHICI_BOGDAN_1_DOMAIN_H

#include <iostream>
using namespace std;

class Trench{
private:
    int size;
    int price;
    int quantity;
    string colour;
    string link;
public:
    //default constructor
    Trench()=default;
    //constructor
    Trench(int size, int price, int quantity, string colour, string link);
    //destructor
    ~Trench();
    //get the size of the trech coat
    int getSize();
    //get the price of the trech coat
    int getPrice();
    //get the quantity of the trech coat
    int getQuantity();
    //get the colour of the trech coat
    string getColour();
    //get the link of the trech coat
    string getLink();
    //set the size of the trech coat
    void setSize(int newSize);
    //set the price of the trech coat
    void setPrice(int newPrice);
    //set the quantity of the trech coat
    void setQuantity(int newQuantity);
    //set the colour of the trech coat
    void setColour(const string& newColour);
    //set the link of the trech coat
    void setLink(const string& newLink);
    //overwrites operator ==
    bool operator==(const Trench& elem);
    //overwites operator <<
    friend std::ostream& operator<<(std::ostream& ot, const Trench& elem);
    //overwrites operator >>
    friend std::istream& operator>>(std::istream& it, Trench& elem);

};


#endif //A6_912_DREGHICI_BOGDAN_1_DOMAIN_H
