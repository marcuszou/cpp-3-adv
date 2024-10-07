//
// Created by Marcus Zou on 2024-10-07.
//

#ifndef MAIN_TEXTBOX_H
#define MAIN_TEXTBOX_H

#include <string>
#include "Widget.h"

using namespace std;

class TextBox : public Widget {
public:
    TextBox() = default;
    explicit TextBox(const string& value);
    string getValue();
    void setValue(const string& value);
private:
    string value;

};


#endif //MAIN_TEXTBOX_H
