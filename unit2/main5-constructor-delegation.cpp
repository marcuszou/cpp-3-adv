#include "Rectangle.h"
#include <iostream>

using namespace std;

/*
 * Definition: Data Hiding
 * - A class should hide its internal data from the outside code
 * - and provide functions for accessing the data.
 */
int main() {
    Rectangle rectangle{10, 20, "blue"};
    //cout << rectangle.getWidth() << endl;

    return 0;
}
