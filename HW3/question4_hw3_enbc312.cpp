#include <iostream>
using namespace std;
void swapNumbers(int* a, int* b);

int main() {
    int num1, num2;
    cout << "Enter one number: " << endl;
    cin >> num1;
    cout << "Enter another number: " << endl;  
    cin >> num2;

    swapNumbers(&num1, &num2); 
    
    cout << "verification: num1: " << num1 << ", num2: " << num2 << endl;

    return 0;
}

void swapNumbers(int *a, int *b) {
    int temp = *a; 
    *a = *b;       
    *b = temp;     

    cout << "new values: " << *a << " " << *b << endl;
}