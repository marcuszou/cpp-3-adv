//
// Created by Marcus Zou on 2024-10-04.
//

#ifndef MAIN_RECTANGLE_H
#define MAIN_RECTANGLE_H


class Rectangle {
public:
    void draw();
    int getArea();
    // Getter (accessor)
    int getWidth();
    // Setter (mutator)
    void setWidth(int width);
private:
    int width;
    int height;
public:
    int getHeight() const;

    void setHeight(int height);

};


#endif //MAIN_RECTANGLE_H
