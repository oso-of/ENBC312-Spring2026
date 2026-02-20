#include <iostream>

using namespace std; 
void SimpleMath(int sums);

int main(){
    int sums;
    cout << "Enter an amount of numbers to add ";
    cin >> sums;

    SimpleMath(sums);
    return 0;
}

void SimpleMath(int sums){

    int value;
    int total = 0;

    while(int number = 0; number < sums; number++){
        cout << "Enter a number you wish to add: ";
        cin >> value;

        total += value;   
    }

    cout << "The total is " << total << endl;
}

    
/home/oseiy/HW1_temp