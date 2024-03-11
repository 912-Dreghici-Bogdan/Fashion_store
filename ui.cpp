//
// Created by Asus on 5/28/2023.
//
#include <Windows.h>
#include <limits>
#include <iostream>
#include <string>
#include "ui.h"
#include "fstream"
#include "trenchValidator.h"
#include "repository.h"

using std::cin;
using std::cout;
using std::string;

void readinteger(int &integer) {
    string line;
    getline(cin, line);
    try {
        integer = stoi(line);
    }
    catch (std::invalid_argument &e) {
        cout << "Invalid argument: " << e.what() << endl;
        throw;
    }
    catch (std::out_of_range &e) {
        cout << "Out of range: " << e.what() << endl;
        throw;
    }
    catch (...) {
        cout << "Unknown exception" << endl;
        throw;
    }

}



void Ui::hardCodedEntries() {
    this->_service.addTrench(38, 100, "black", "https://www.checkvintageshop.ro/shop_products_item"
                                               "/&spid=5861?gclid=Cj0KCQjwxMmhBhDJARIsANFGOStzFQzQjvXzUSwSFIcSzSa-aWzm-"
                                               "qOinVyvsxGS0DYK5MAGy7smO_MaAnx5EALw_wcB");
    this->_service.addTrench(44, 78, "brown", "https://www.tom-tailor.store/ro/catalog/produs/ro-"
                                              "femei/ro-femei-jachete/p/trenci-maro_4101438?gclid=Cj0KCQjwxMmhBhDJARIs"
                                              "ANFGOSvz_GursIRlt8-xUStNby0kZB7ZraGvoWtPEz_VLYJlbU8PVoi6lSwaAgcUEALw_wcB");
    this->_service.addTrench(40, 300, "green", "https://ro.marinarinaldi.com/p-2021103004060-"
                                               "tattile-dark-green?gclid=Cj0KCQjwxMmhBhDJARIsANFGOSv3ZkLhDoYvKagFoRPl5"
                                               "jXFBBKzyp0DtqT17upIGKYNUM6-c1KMFo4aApAuEALw_wcB&gclsrc=aw.ds");
    this->_service.addTrench(36, 200, "beije", "https://www.google.com/url?sa=i&url=https%3A%2F%2"
                                               "Foutfitbook.fr%2Fen%2Fcoats-jackets%2F6103-longline-trench-coat.html&"
                                               "psig=AOvVaw3uOXsxllQ8em9YhkNuCGTC&ust=1681153605681000&source=images&"
                                               "cd=vfe&ved=0CBEQjRxqFwoTCMjn8q2_nf4CFQAAAAAdAAAAABAN");
    this->_service.addTrench(50, 199, "black", "https://www.google.com/url?sa=i&url=https%3A%2F%2"
                                               "Fcockpitusa.com%2Fproducts%2Fthe-agent-trench-coat&psig=AOvVaw3uOXsxl"
                                               "lQ8em9YhkNuCGTC&ust=1681153605681000&source=images&cd=vfe&ved=0CBMQjhx"
                                               "qFwoTCMjn8q2_nf4CFQAAAAAdAAAAABAT");
    this->_service.addTrench(38, 100, "black", "https://www.checkvintageshop.ro/shop_products_item"
                                               "/&spid=5861?gclid=Cj0KCQjwxMmhBhDJARIsANFGOStzFQzQjvXzUSwSFIcSzSa-aWzm-"
                                               "qOinVyvsxGS0DYK5MAGy7smO_MaAnx5EALw_wcB");
    this->_service.addTrench(44, 78, "brown", "https://www.tom-tailor.store/ro/catalog/produs/ro-"
                                              "femei/ro-femei-jachete/p/trenci-maro_4101438?gclid=Cj0KCQjwxMmhBhDJARIs"
                                              "ANFGOSvz_GursIRlt8-xUStNby0kZB7ZraGvoWtPEz_VLYJlbU8PVoi6lSwaAgcUEALw_wcB");
    this->_service.addTrench(40, 300, "green", "https://ro.marinarinaldi.com/p-2021103004060-"
                                               "tattile-dark-green?gclid=Cj0KCQjwxMmhBhDJARIsANFGOSv3ZkLhDoYvKagFoRPl5"
                                               "jXFBBKzyp0DtqT17upIGKYNUM6-c1KMFo4aApAuEALw_wcB&gclsrc=aw.ds");
    this->_service.addTrench(36, 200, "beije", "https://www.google.com/url?sa=i&url=https%3A%2F%2"
                                               "Foutfitbook.fr%2Fen%2Fcoats-jackets%2F6103-longline-trench-coat.html&"
                                               "psig=AOvVaw3uOXsxllQ8em9YhkNuCGTC&ust=1681153605681000&source=images&"
                                               "cd=vfe&ved=0CBEQjRxqFwoTCMjn8q2_nf4CFQAAAAAdAAAAABAN");
    this->_service.addTrench(50, 199, "black", "https://www.google.com/url?sa=i&url=https%3A%2F%2"
                                               "Fcockpitusa.com%2Fproducts%2Fthe-agent-trench-coat&psig=AOvVaw3uOXsxl"
                                               "lQ8em9YhkNuCGTC&ust=1681153605681000&source=images&cd=vfe&ved=0CBMQjhx"
                                               "qFwoTCMjn8q2_nf4CFQAAAAAdAAAAABAT");
}

void Ui::menu1() {
    cout<<"Choose mode:\n";
    cout<<"1. Administrator mode\n";
    cout<<"2. User mode\n";
}

void Ui::adminMenu() {
    cout << "1. Add trench coats" << endl;
    cout << "2. Remove trench coats" << endl;
    cout << "3. Update trench coats" << endl;
    cout << "4. List all trench coats" << endl;
    cout << "5. Save tp file" << endl;
    cout << "6. Open in app" << endl;
    cout << "0. Exit" << endl;
}

void Ui::adminUser() {
    int option;
    while (true){
        this->adminMenu();
        cout<<"Choose option: ";
        try { readinteger(option); }
        catch (...) {
            continue;
        }
        if (option == 0) {
            break;
        }
        else if (option == 1){
            int size, price;
            string colour, link;
            cout<<"Size= ";
            try { readinteger(size); }
            catch (...) {
                continue;
            }
            cout<<"Price= ";
            try { readinteger(price); }
            catch (...) {
                continue;
            }
            cout<<"Colour= ";
            cin>>colour;
            cout<<"Photo= ";
            cin>>link;
            bool ok;
            Trench trench(size, price, 0, colour, link);
            try {
                trenchValidator::validate(trench);
            }
            catch (ValidationException &e){
                cout << e.getMessage() << endl;
                continue;
            }
            ok = this->_service.addTrench(size, price, colour, link);
            this->ToFile();
            if (ok){
                cout<<"A new trench coat has been added.\n";
            }
            else{
                cout<<"The quantity of the trench coat has been increased.\n";
            }
        }
        else if(option == 2){
            try {
                int size, price;
                string colour, link;
                cout << "Size= ";
                try { readinteger(size); }
                catch (...) {
                    continue;
                }
                cout << "Price= ";
                try { readinteger(price); }
                catch (...) {
                    continue;
                }
                cout << "Colour= ";
                cin >> colour;
                cout << "Photo= ";
                cin >> link;
                bool ok;
                Trench trench(size, price, 0, colour, link);
                try {
                    trenchValidator::validate(trench);
                }
                catch (ValidationException &e){
                    cout << e.getMessage() << endl;
                    continue;
                }
                ok = this->_service.removeTrench(trench);
                if (ok) {
                    cout << "The trench coat has been removed\n";
                    this->ToFile();
                } else cout << "An error has occured\n";
            }
            catch (RepositoryException& e){
                cout << e.what() << endl;
                continue;
            }
        }else if (option == 3){
            int size, price;
            string colour, link;
            cout<<"Size= ";
            try { readinteger(size); }
            catch (...) {
                continue;
            }
            cout<<"Price= ";
            try { readinteger(price); }
            catch (...) {
                continue;
            }
            cout<<"Colour= ";
            cin>>colour;
            cout<<"Photo= ";
            cin>>link;

            int new_size, new_price, new_quantity;
            string new_colour, new_link;
            cout<<"New size= ";
            while (!(cin >> new_size)) {
                cout << "Invalid input. Please enter an integer.Size: " << endl;
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
            }
            cout<<"New price= ";
            while (!(cin >> new_price)) {
                cout << "Invalid input. Please enter an integer.Price: " << endl;
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
            }
            cout<<"New quantity= ";
            while (!(cin >> new_quantity)) {
                cout << "Invalid input. Please enter an integer.Price: " << endl;
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
            }
            cout<<"New colour= ";
            cin>>new_colour;
            cout<<"New photo= ";
            cin>>new_link;
            bool ok;
            Trench trench (size, price, 0, colour, link);
            try {
                trenchValidator::validate(trench);
            }
            catch (ValidationException &e){
                cout << e.getMessage() << endl;
                continue;
            }
            Trench new_trench (new_size,new_price, new_quantity, new_colour, new_link);
            try {
                trenchValidator::validate(new_trench);
            }
            catch (ValidationException &e){
                cout << e.getMessage() << endl;
                continue;
            }
            try {
                this->_service.updateTrench(trench, new_trench);
            }
            catch (RepositoryException& e){
                cout << e.what() << endl;
                continue;
            }
        }
        else if(option == 4){
            vector<Trench> trenches = this->_service.getAll();
            for (int i = 0; i < trenches.size(); i++) {
                Trench trench = trenches[i];
                cout << "Size: "<< trench.getSize()<< endl;
                cout << "Price: "<< trench.getPrice()<< endl;
                cout << "Quantity: "<< trench.getQuantity()<< endl;
                cout << "Colour: "<< trench.getColour()<< endl;
                cout << "Photo: "<< trench.getLink()<< endl;
                cout << endl;
            }
        } else if(option == 5){
            try{
                this->_service.saveToFile(this->filename);
            }
            catch (UiException &e) {
                cout << e.what() << endl;
                continue;
            }

        } else if(option == 6 ){
            try{
                this->_service.openInApp();
            }
            catch (UiException &e) {
                cout << e.what() << endl;
                continue;
            }
        } else {
            cout << "Invalid option!" << endl;
        }
    }

}

void Ui::userUser() {
    string in, s = "", size;
    int total_cost = 0, option = -1;
    cout << "The size you are looking for: ";
    getline(cin, size);
    while(option !=0 ) {
        if (size == s) {
            vector<Trench> trenches = this->_service.getAll();
            for (int i = 0; i < trenches.size(); i++) {
                Trench trench = trenches[i];
                cout << "Size: " << trench.getSize() << endl;
                cout << "Price: " << trench.getPrice() << endl;
                cout << "Quantity: " << trench.getQuantity() << endl;
                cout << "Colour: " << trench.getColour() << endl;
                cout << "Photo: " << trench.getLink() << endl;
                cout << endl;
                cout << "Would you like to add this product to your shopping bag?\n"
                        "Type 1 for yes, 2 to get the next trench coat, 3 to see price of shopping cart, 4 to see shopping cart or 0 to exit\n"
                        ">";
                cin >> option;
                if (cin.fail()) {
                    cin.clear();
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                    cout << "Invalid input! Please enter a valid integer option." << endl;
                    continue;
                }
                if (option == 1) {
                    if (trench.getQuantity() > 0) {
                        total_cost += trench.getPrice();
                        int auxq = trenches[i].getQuantity();
                        trenches[i].setQuantity(0);
                        this->shopinBag.add(trenches[i]);
                        trenches[i].setQuantity(auxq);
                        Trench auxiliary;
                        auxiliary = trenches[i];
                        auxiliary.setQuantity(auxiliary.getQuantity() - 1);
                        this->_service.updateTrench(trenches[i], auxiliary);
                        trenches[i].setQuantity(trenches[i].getQuantity() - 1);
                    }
                    if (trench.getQuantity() == 0){
                        cout << "Not in stock!\n";
                    }
                    i--;
                } else if (option == 2) {
                    if (i == trenches.size()) {
                        i = 0;
                    }
                } else if (option == 0) {
                    break;
                } else if (option == 3){
                    cout << "Total sum in shopping cart: " << total_cost << endl;
                } else if (option == 4){
                     this->displaySoppingCart();
                }
            }
        } else {
            vector<Trench> trenches = this->_service.getAll();
            for (int i = 0; i < trenches.size(); i++) {
                Trench trench = trenches[i];
                if (trench.getSize() == stoi(size)) {
                    cout << "Size: " << trench.getSize() << endl;
                    cout << "Price: " << trench.getPrice() << endl;
                    cout << "Quantity: " << trench.getQuantity() << endl;
                    cout << "Colour: " << trench.getColour() << endl;
                    cout << "Photo: " << trench.getLink() << endl;
                    cout << endl;
                    cout << "Would you like to add this product to your shopping bag?\n"
                            "Type 1 for yes, 2 to get the next trench coat, 3 to see price of shopping cart, 4 to see shopping cart or 0 to exit\n"
                            ">";
                    cin >> option;
                    if (cin.fail()) {
                        cin.clear();
                        cin.ignore(numeric_limits<streamsize>::max(), '\n');
                        cout << "Invalid input! Please enter a valid integer option." << endl;
                        continue;
                    }
                    if (option == 1) {
                        if (trench.getQuantity() > 0) {
                            total_cost += trench.getPrice();
                            int auxq = trenches[i].getQuantity();
                            trenches[i].setQuantity(0);
                            this->shopinBag.add(trenches[i]);
                            trenches[i].setQuantity(auxq);
                            Trench auxiliary;
                            auxiliary = trenches[i];
                            auxiliary.setQuantity(auxiliary.getQuantity() - 1);
                            this->_service.updateTrench(trenches[i], auxiliary);
                            trenches[i].setQuantity(trenches[i].getQuantity() - 1);
                        }
                        cout << "The total cost in your shopping bascket is:" << total_cost << endl;
                        if (trench.getQuantity() == 0){
                            cout << "Not in stock!\n";
                        }
                        i--;
                    } else if (option == 2) {
                        if (i == trenches.size()) {
                            i = 0;
                        }
                    } else if (option == 0) {
                        break;
                    }else if (option == 3){
                        cout << "Total sum in shopping cart: " << total_cost << endl;
                    }else if (option == 4){
                        this->displaySoppingCart();
                    }
                }
            }
        }
    }

}

void Ui::Fromfile() {
    ifstream f("D:\\Faculta\\Semestrul_2\\Object_orinted_programing\\Laboratoare\\a7-912-Dreghici-Bogdan-1\\trenches.txt");
    if(!f.is_open())
        printf("Error opening file");
    Trench trench;
    while( f >> trench){
        try {
            trenchValidator::validate(trench);
        }
        catch (ValidationException &e){
            cout << e.getMessage() << endl;
            continue;
        }
        for(int i = 0; i < trench.getQuantity(); i ++)
            _service.addTrench(trench.getSize(), trench.getPrice(), trench.getColour(), trench.getLink());
    }
    f.close();
}

void Ui::ToFile() {
    ofstream f("D:\\Faculta\\Semestrul_2\\Object_orinted_programing\\Laboratoare\\a7-912-Dreghici-Bogdan-1\\tutorials.txt", ios::trunc);
    if (!f.is_open())
        printf("Error opening the file");
    for (const auto& trench: _service.getAll()) {
        f << trench;
    }
    f.close();
}

void Ui::start() {
    int option;
    //this->hardCodedEntries();
    this->Fromfile();
    cin.ignore();
    while (true) {
        this->menu1();
        cout << "Option: ";
        try { readinteger(option); }
        catch (...) {
            continue;
        }
        if (option == 1) {
            try {
                this->adminUser();
            }
            catch (UiException &e) {
                cout << e.what() << endl;
                continue;
            }
        } else if (option == 2){
            try {
                this->userUser();
            }
            catch (UiException &e) {
                cout << e.what() << endl;
                continue;
            }
        } else if (option == 0){
            break;
        }
    }
}

Ui::~Ui() {}

void Ui::displaySoppingCart() {
    if(this->filename == "D:\\Faculta\\Semestrul_2\\Object_orinted_programing\\Laboratoare\\a7-912-Dreghici-Bogdan-1\\trenches.csv"){
        ofstream f("D:\\Faculta\\Semestrul_2\\Object_orinted_programing\\Laboratoare\\a7-912-Dreghici-Bogdan-1\\shoppingcart.csv", ios::trunc);
        if (!f.is_open())
            printf("Error opening the file");
        for (const auto& trench: shopinBag.getAllTrenches()) {
            f << trench;
        }
        f.close();
        string aux = "D:\\Faculta\\Semestrul_2\\Object_orinted_programing\\Laboratoare\\a7-912-Dreghici-Bogdan-1\\shoppingcart.csv";
        ShellExecuteA(NULL, "open", "C:\\ProgramData\\Microsoft\\Windows\\Start Menu\\Programs\\Excel.lnk", aux.c_str(),
                      NULL, SW_SHOWNORMAL);
    }else{
        ofstream f("D:\\Faculta\\Semestrul_2\\Object_orinted_programing\\Laboratoare\\a7-912-Dreghici-Bogdan-1\\shoppingcart.html", ios::trunc);
        if (!f.is_open())
            printf("Error opening the file");
        for (const auto& trench:shopinBag.getAllTrenches()) {
            f << trench;
        }
        f.close();
        string aux = "D:\\Faculta\\Semestrul_2\\Object_orinted_programing\\Laboratoare\\a7-912-Dreghici-Bogdan-1\\shoppingcart.html";
        ShellExecuteA(NULL, NULL, "C:\\ProgramData\\Microsoft\\Windows\\Start Menu\\Programs\\Google Chrome.lnk",
                      aux.c_str(), NULL,SW_SHOWMAXIMIZED);
    }
}
