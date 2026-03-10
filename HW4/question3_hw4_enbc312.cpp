#include <iostream>
#include <string>
using namespace std;

class Animal {
private:
    string species;

public:
    Animal(string s) {
        species = s;
    }

    void setSpecies(string s) {
        species = s;
    }

    string getSpecies() { 
        return species;
    }
};

class Dog : public Animal {
private:
    string breed;

public:
    Dog(string s, string b) : Animal(s) { 
        breed = b;
    }

    void setBreed(string b) {
        breed = b;
    }

    string getBreed() { 
        return breed;
    }
};

int main() {
    Dog pet1("Mammal", "Labrador");
    cout << "Species: " << pet1.getSpecies() << endl;
    cout << "Breed: " << pet1.getBreed() << endl;

    return 0;
}