#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = 5;

    int* ptrL = arr;           
    int* ptrR = arr + (size - 1);

    while (ptrL < ptrR) {
        int temp = *ptrL;
        *ptrL = *ptrR;
        *ptrR = temp;

        ptrL++;
        ptrR--;
    }
    cout << "Reversed array: ";
    for(int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}