#ifndef LENGTH_H
#define LENGTH_H

class Length {
public:
    explicit Length(int value);
    bool operator==(const Length &other) const
    {
        return value == other.value;
    };
    bool operator==(int other);

private:
    int value;
};



#endif //LENGTH_H
