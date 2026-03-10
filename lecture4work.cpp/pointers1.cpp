#include <iostream>
using namespace std;

class MyClass{
    public:
    int var1 = 20;
   
    private:
    int var2 = 42;
};

int main(){
    MyClass obj;
    int x = obj.var1;
    cout << x << endl;
   
    int y = obj.var2;         
    cout << y << endl;
    return 0;
}