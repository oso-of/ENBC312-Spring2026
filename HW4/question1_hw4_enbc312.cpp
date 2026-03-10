#include <iostream>
#include <string>
using namespace std;
class Car {
private:
    string brand;
    int year;

public: 
    Car(string b, int y) {
        brand = b;
        year = y;
    }

    void setBrand(string b) {
        brand = b; 
    }

    void setYear(int y) {
        year = y;
    }

    string getBrand() { return brand; }
    int getYear() { return year; }
};

int main() {
    Car car1("Toyota", 2020);
    cout << "Brand: " << car1.getBrand() << endl;
    cout << "Year: " << car1.getYear() << endl;

    return 0;
}