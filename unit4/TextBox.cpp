//
// Created by Marcus Zou on 2024-10-07.
//

#include "TextBox.h"

string TextBox::getValue() {
    // Protected members: OK
    this->width;
    //Private members: No
    return value;
}

TextBox::TextBox(const string &value) : value{value} {

}