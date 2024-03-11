//
// Created by Asus on 5/28/2023.
//

#include "TrenchFromFile.h"

TrenchFromFile::TrenchFromFile() : Repository{}, filename{""} {}

void TrenchFromFile::setFile(const string &filename) {
    this->filename = filename;
}
