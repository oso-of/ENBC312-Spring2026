#include <iostream>
using namespace std; 

int main(){
    int arr[] = {1,2,3,4,5};

    int* p1 = &arr[1];   
    int* p2 = &arr[3];   

    int tmp = *p1;
    *p1 = *p2;
    *p2 = tmp;

    for(int i = 0; i < 5; i++){
        cout << arr[i] << " ";
    }

    return 0;
}