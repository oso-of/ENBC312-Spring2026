#include <iostream>

using namespace std; 
void CountingUp(int a, int b);

int main(){
    int a;
    cout << "Enter a number for a: ";
    cin >> a;

    int b;
    cout << "Enter a number for b: ";
    cin >> b;

    CountingUp(a,b);
    return 0;
}

void CountingUp(int a, int b){
    

    if(a >= b){
        cout << "Error: b must be greater than a";
    }

    else{
        int new_number = a + 1;
        while(b > new_number){
        cout << " " << new_number <<'\n';
        new_number++;
    }

    }    
}