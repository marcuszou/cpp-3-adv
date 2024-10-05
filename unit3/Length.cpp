#include "Length.h"

Length::Length(int value) : value(value){}

bool Length::operator==(int other){
    return value == other;
}
