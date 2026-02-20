#include <iostream>

using namespace std; 
void SimpleMath(int a, int b);

int main(){
    int a;
    cout << "Enter a number for a: ";
    cin >> a;

    int b;
    cout << "Enter a number for b: ";
    cin >> b;

    SimpleMath(a,b);
    return 0;
}

void SimpleMath(int a, int b){
    int answer = a*b + 200;

    for(int i = 0; i <= 2; i++){
        cout << " The answer is" << answer <<'\n';
    }
    
}