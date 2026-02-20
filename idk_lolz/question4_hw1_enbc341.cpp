#include <iostream>

using namespace std; 
void SimpleMath(double a, double b);

int main(){
    double a;
    cout << "Enter a number for a: ";
    cin >> a;

    double b;
    cout << "Enter a number for b: ";
    cin >> b;

    SimpleMath(a,b);
    return 0;
}

void SimpleMath(double a, double b){
    double answer = a*b + 20.51;

    for(int i = 0; i <= 2; i++){
        cout << " The answer is" << answer <<'\n';
    }
    
}