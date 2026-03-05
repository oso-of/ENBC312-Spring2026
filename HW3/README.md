
## Question 1

I created the array `int arr[] = {1, 2, 3, 4, 5};` and then used pointers to access the second and fourth elements. I set `int* ptr2 = arr + 1` and `int* ptr4 = arr + 3`, which point to those positions in the array. 
I then swapped the values using a temporary variable with `int temp = *ptr2`, `*ptr2 = *ptr4`, and `*ptr4 = temp`. Finally, I printed the array with a loop to show that the elements were swapped.

## Question 2

I asked the user to enter two numbers and stored them in `a` and `b`. I then passed their addresses to the function using `SumInt(&a, &b)`. Inside the function, I dereferenced the pointers (`*numptr1` and `*numptr2`) 
and added them together to compute the sum. The result was printed using `cout`.

## Question 3

I reversed the array using two pointers. I set `int* ptrL = arr` to point to the beginning of the array and `int* ptrR = arr + (size - 1)` to point to the end. While `ptrL < ptrR`, I swapped the values they point to 
using a temporary variable. After each swap I moved the pointers inward with `ptrL++` and `ptrR--`. This reversed the array, which I then printed.

## Question 4

I wrote a function `swapNumbers(int* a, int* b)` that swaps two numbers using pointers. Inside the function I used `int temp = *a`, `*a = *b`, and `*b = temp` to exchange the values. In `main()` I asked the user to 
enter two numbers and passed their addresses to the function using `swapNumbers(&num1, &num2)`. After the function runs, the values are swapped and printed.
