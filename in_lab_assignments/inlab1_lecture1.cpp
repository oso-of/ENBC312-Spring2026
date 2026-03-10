#include <iostream>
using namespace std; 

class MyClass {
public:
    int var1; 
private:
    int var2; 
public:
    MyClass() : var1(10), var2(20) {}

    int getVar2() {
        return var2;
    }
};
int main() {
    MyClass obj;
    cout << "Public var1: " << obj.var1 << endl;
    cout << "Private var2: " << obj.getVar2() << endl;

    return 0;
}
