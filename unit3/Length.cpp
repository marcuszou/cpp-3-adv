#include "Length.h"

Length::Length(int value) : value(value){}

bool Length::operator==(int other){
    return value == other;
}

strong_ordering Length::operator<=>(const Length &other) const {
    return value <=> other.value;
}

bool Length::operator==(const Length &other) const {
    return false;
}

int Length::getValue() const {
    return value;
}

void Length::setValue(int value) {
    Length::value = value;
}

/*
// comparison operator
bool Length::operator<(const Length &other) const {
    return value < other.value;
}

bool Length::operator>(const Length &other) const {
    return value > other.value;
}

bool Length::operator<=(const Length &other) const {
    return !(value > other.value);
}

bool Length::operator>=(const Length &other) const {
    return !(value < other.value);
}
*/
ostream operator<<(ostream &stream, const Length &length) {
    stream << length.getValue()
    return stream;
}
