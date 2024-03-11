//
// Created by Asus on 5/28/2023.
//

#include "domain.h"
#include <string>
#include <vector>
#include <sstream>

using namespace std;

Trench::Trench(int size, int price, int quantity, string colour, string link){
    this->colour = colour;
    this->size = size;
    this->price = price;
    this->quantity = quantity;
    this->link = link;
}

Trench::~Trench() {};

int Trench::getSize() {
    return this->size;
}

int Trench::getPrice() {
    return this->price;
}

int Trench::getQuantity() {
    return this->quantity;
}

string Trench::getColour() {
    return this->colour;
}

string Trench::getLink() {
    return this->link;
}

void Trench::setSize(int newSize) {
    this->size = newSize;
}

void Trench::setPrice(int newPrice) {
    this-> price = newPrice;
}

void Trench::setQuantity(int newQuantity) {
    this->quantity = newQuantity;
}

void Trench::setColour(const string& newColour) {
    this->colour = newColour;
}

void Trench::setLink(const string& newLink) {
    this->link = newLink;
}

bool Trench::operator==(const Trench& elem) {
    if(this->price != elem.price){
        return false;
    }
    if(this->size != elem.size){
        return false;
    }

    if(this->colour != elem.colour){
        return false;
    }

    if(this->link != elem.link){
        return false;
    }
    return true;
}

std::ostream &operator<<(ostream &ot, const Trench &elem) {
    ot << elem.size << "," << elem.price << "," << elem.quantity << "," << elem.colour << "," << elem.link << "\n";
    return ot;
}

vector<string> tokensize(string str, char delimiter){
    vector<string> result;
    stringstream ss(str);
    string token;
    while(getline(ss, token, delimiter)){
        result.push_back(token);
    }
    return result;
}

std::istream &operator>>(istream &it, Trench &elem) {
    std::string line;
    std::getline(it, line);
    std::vector<std::string> tokens = tokensize(line, ',');
    if (tokens.size() != 5) {
        return it;
    }
    elem.size = std::stoi(tokens[0]);
    elem.price = std::stoi(tokens[1]);
    elem.quantity = std::stoi(tokens[2]);
    elem.colour = tokens[3];
    elem.link =tokens[4];
    return it;
}
