//
// Created by Asus on 5/28/2023.
//
#include <Windows.h>
#include "TrenchFromFileCSV.h"
#include "fstream"
#include "repository.h"

void TrenchFromFileCSV::toFile() {
    ofstream f(this->filename);
    if (!f.is_open())
        throw RepositoryException("The file could not be opened!");
    for (auto trench: this->trenches)
        f << trench;
    f.close();
}

void TrenchFromFileCSV::showFile() {
    string aux = "D:\\Faculta\\Semestrul_2\\Object_orinted_programing\\Laboratoare\\a7-912-Dreghici-Bogdan-1\\trenches.csv";
    ShellExecuteA(NULL, "open", "C:\\ProgramData\\Microsoft\\Windows\\Start Menu\\Programs\\Excel.lnk", aux.c_str(),
                  NULL, SW_SHOWNORMAL);

}


