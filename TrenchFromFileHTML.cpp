//
// Created by Asus on 5/28/2023.
//
#include <Windows.h>
#include "TrenchFromFileHTML.h"
#include "fstream"
#include "repository.h"

void TrenchFromFileHTML::toFile() {
    ofstream f(this->filename);
    if (!f.is_open())
        throw RepositoryException("The file could not be opened!");
    f << "<!DOCTYPE html>\n";
    f << "<html>\n";
    f << "<head>\n";
    f << "  <title>Tutorials</title>\n";
    f << "</head>\n";
    f << "<body>\n";
    f << "<table border=\"1\">\n";
    f << "  <tr>\n";
    f << "      <td>Size</td>\n";
    f << "      <td>Price</td>\n";
    f << "      <td>Quantity</td>\n";
    f << "      <td>Colour</td>\n";
    f << "      <td>Link</td>\n";
    f << "  </tr>\n";
    for (auto trench: this->trenches)
        f <<  "  <tr>\n"
        << "        <td>" << trench.getSize() << "</td>\n"
        << "        <td>" << trench.getPrice() << "</td>\n"
        << "        <td>" << trench.getQuantity() << "</td>\n"
        << "        <td>" << trench.getColour() << "</td>\n"
        << "        <td>" << trench.getLink() << "</td>\n"
        << "  </tr>\n";
    f << "</table>\n";
    f << "</body>\n";
    f << "</html>\n";
    f.close();
}

void TrenchFromFileHTML::showFile() {
    string aux = "D:\\Faculta\\Semestrul_2\\Object_orinted_programing\\Laboratoare\\a7-912-Dreghici-Bogdan-1\\trenches.html";
    ShellExecuteA(NULL, NULL, "C:\\ProgramData\\Microsoft\\Windows\\Start Menu\\Programs\\Google Chrome.lnk",
                  aux.c_str(), NULL,SW_SHOWMAXIMIZED);

}

