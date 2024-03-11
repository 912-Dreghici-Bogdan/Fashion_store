//
// Created by Asus on 5/28/2023.
//

#include "trenchValidator.h"

ValidationException::ValidationException(string _message) : message{_message} {}

std::string ValidationException::getMessage() const {
    return this->message;
}

void trenchValidator::validate(Trench elem) {
    string errors;
    if(elem.getSize() < 30)
        errors += string("The size must be above 30!\n");
    if(elem.getPrice() < 0)
        errors += string("The price must be above 0!\n");
    if(elem.getQuantity() < 0)
        errors += string("The quantity must be a positive number\n");
    if(elem.getColour().size() < 1)
        errors += string("Enter a legit colour\n");
    if(elem.getLink().find("https") != 0)
        errors += string("The link must start with www!\n");

    if (!errors.empty())
        throw ValidationException(errors);

}
