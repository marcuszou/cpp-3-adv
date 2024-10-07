#include <iostream>
#include "TextBox.h"
#include "Widget.h"

using namespace std;

int main() {
    TextBox box;
    box.disable();
    cout << boolalpha << box.isEnabled();
}

