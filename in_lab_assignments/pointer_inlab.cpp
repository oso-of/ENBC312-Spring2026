#include <iostream>
using namespace std; 
void swap_elements_by_pointer(int* ptr1, int* ptr2) {
    int temp = *ptr1;  
    *ptr1 = *ptr2;     
    *ptr2 = temp;      
}

int main() {
    int array[] = {1, 2, 3, 4, 5};
    
    cout << "Original array: ";
    for (int i = 0; i < 5; ++i) {
        cout << array[i] << " ";
    }
    cout << endl;
    int* second_element_ptr = &array[1];
    int* fourth_element_ptr = &array[3];

    swap_elements_by_pointer(second_element_ptr, fourth_element_ptr);

    cout << "Array after swap: ";
    for (int i = 0; i < 5; ++i) {
        cout << array[i] << " ";
    }
    cout << endl;

    return 0;
}

int a = 10;
cput << end1;
int *b;
b = &a;
*(b) = 11;
cout << a <<endl;

int arr = {1,2,3,4,5};
cout << *(arr)
c = arr;
cout << c<< endl;
cout << *(arr+1);
cout << arr[0] << endl;

int tmp = arr[1];
srr[3] = arr[1];
Arr[1] = tmp;