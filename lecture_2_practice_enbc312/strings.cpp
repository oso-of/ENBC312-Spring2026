#include <iostream>
#include <string>

using namespace std;

int main(){
    int age = 30;
    double price = 19.95;
    char grade = 'A';
    string name = "John";
    bool is_registered = true;


    cout << "Age: " <<age<< '\n';
    cout << "Price: " <<price<< endl;
    cout << "Grade: " << grade << endl;
    cout << "Name: " << string name << endl;
    cout << "Registration Status: " << boolalpha << is_registered << endl;

    return 0; 


}