#include <iostream>
using namespace std; 

int main(){
    int onedimensionarray[5] = {6, 3, 4, 9, 1};

    int largest = onedimensionarray[0];

    for(i = 0; i < onedimensionarray; i++){
        if (onedimensionarray[i] > largest) {
            largest = onedimensionarray[i];
        }
    }
    cout << "The largest number is: " << largest << endl;

    return 0;

    }
