#include <iostream>
using namespace std;

int main(){
    int score;
    cout << "Enter your grade percentage: ";
    cin >> score;
    if(score < 0 || score > 100){
        cout << "Invalid score" << '\n';
    }
    
    if(score >= 90){
        cout << " A" << '\n';
    }
    else if(score >= 80){
        cout << " B" << '\n';
    }
    else if(score >= 70){
        cout << " C" << '\n';
    }
    else if(score >= 60){
        cout << " D" << '\n';
    }
    else{
        cout << " F" << '\n';
    }
    return 0;
    
    
}