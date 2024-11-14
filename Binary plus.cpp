#include <iostream>
using namespace std;

class BinaryPlus {
private:
    int value;

public:
    // Constructor to initialize value
    BinaryPlus(int v = 0) : value(v) {}

    // Overloading the + operator
    BinaryPlus operator+(const BinaryPlus& obj) const {
        return BinaryPlus(value + obj.value);
    }

    // Display function
    void display() const {
        cout << "Value: " << value << endl;
    }
};

int main() {
    BinaryPlus obj1(10);    // First object with value 10
    BinaryPlus obj2(20);    // Second object with value 20

    BinaryPlus result = obj1 + obj2;  // Using the overloaded + operator

    cout << "Result after binary plus operation:" << endl;
    result.display();

    return 0;
}
