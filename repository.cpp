//
// Created by Asus on 5/28/2023.
//

#include "repository.h"
#include <algorithm>

Repository::Repository() {}

Repository::~Repository() {}

bool Repository::add(Trench elem) {
    auto it = find(trenches.begin(), trenches.end(), elem);
    if (it != trenches.end())
    {
        Trench trench = *it;
        trench.setQuantity(trench.getQuantity() + 1);
        *it = trench;
        return false;
    }
    else {
        trenches.push_back(elem);
        return true;
    }
}

bool Repository::remove(Trench elem) {
    auto it = find(trenches.begin(), trenches.end(), elem);
    if (it == trenches.end()){
        throw RepositoryException{"There is no matching trench coat to be deleted!"};
    }
    Trench& trench = *it;
    if (trench.getQuantity() == 1){
        trenches.erase(it);
        return true;
    } else{
        trench.setQuantity(trench.getQuantity() + 1);
        return false;
    }

}

bool Repository::update(Trench elem, Trench newElem) {
    auto it = find(trenches.begin(), trenches.end(), elem);
    if (it != trenches.end()){
        *it = newElem;
    } else{
        throw RepositoryException{"There is no matching trench coat to be updated!"};
    }
}

vector<Trench> Repository::getAllTrenches() {
    return this->trenches;
}
