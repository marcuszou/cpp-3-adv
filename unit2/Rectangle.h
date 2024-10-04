//
// Created by Marcus Zou on 2024-10-04.
//

#ifndef MAIN_RECTANGLE_H
#define MAIN_RECTANGLE_H

#include <string>

using namespace std;

class Rectangle {
public:
    //constructor
    Rectangle() = default;
    Rectangle(const Rectangle& source);
    Rectangle(int width, int height);
    Rectangle(int width, int height, const string& color);
    void draw();
    int getArea();
    int getWidth();
    void setWidth(int width);
    int getHeight() const;
    void setHeight(int height);
private:
    int width = 0;
    int height = 0;
    string color;

};


#endif //MAIN_RECTANGLE_H
