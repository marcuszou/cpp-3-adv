#ifndef LENGTH_H
#define LENGTH_H

#include <compare>
#include <ostream>

using namespace std;

class strong_ordering;

class Length {
public:
    explicit Length(int value);
    bool operator==(const Length& other) const;
    bool operator==(int other);
    strong_ordering operator<=>(const Length& other) const;
    int getValue() const;
    void setValue(int value);
    // Comparison operator
    /*
     * bool operator<(const Length& other) const;
     * bool operator<=(const Length& other) const;
     * bool operator>(const Length& other) const;
     * bool operator>=(const Length& other) const;
     */

private:
    int value;

};

// Stream insertion operator
ostream operator<<(ostream& stream, const Length& length);

#endif //LENGTH_H
