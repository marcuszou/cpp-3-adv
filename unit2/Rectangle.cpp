//
// Created by Marcus Zou on 2024-10-04.
//

#include "Rectangle.h"
#include <iostream>

using namespace std;

void Rectangle::draw() {
    cout << "Drawing a rectangle" << endl;
    cout << "Dimensions: " << width << ", " << height << endl;
}

int Rectangle::getArea() {
    return width * height;
}

int Rectangle::getWidth() {
    return width;
}

void Rectangle::setWidth(int width) {
    if (width < 0)
        throw invalid_argument("width");
    this->width = width;

}

int Rectangle::getHeight() const {
    return height;
}

void Rectangle::setHeight(int height) {
    if (height < 0)
        throw invalid_argument("height");
    this->height = height;
}

Rectangle::Rectangle(int width, int height) {
    cout << "Constructing a Rectangle" << endl;
    setWidth(width);
    setHeight(height);
}

Rectangle::Rectangle(int width, int height, const string &color) : Rectangle (width, height) {
    cout << "Constructing a Rectangle with color" << endl;
    this->color = color;
}

Rectangle::Rectangle(const Rectangle& source) {
    cout << "Rectangle copied" << endl;
    this->width = source.width;
    this->height = source.height;
    this->color = source.color;
}
