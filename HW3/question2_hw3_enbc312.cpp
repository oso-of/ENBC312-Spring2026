#include <iostream>
using namespace std;

void SumInt(int *numptr1, int *numptr2);

int main(){
    int a, b;
    cout << "Enter one number: " << endl;
    cin >> a;
    cout << "Enter another number: " << endl;  
    cin >> b;

    SumInt(&a, &b); 

    return 0;
}
void SumInt(int *numptr1, int *numptr2){
    int result = *numptr1 + *numptr2;
    cout << "The sum is: " << result << endl;
}