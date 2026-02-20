# ENBC312-Spring2026
Object Oriented Programming in C++ - Spring 2026

## HW1
This folder/repository was created using WSL terminal commands.
QUESTION 1
For Question 1, I set up my development environment and wrote a simple C++ program that prints “Hello Ofure” to the screen using `std::cout`. To create the basic structure of a C++ program, I used  `#include <iostream>` and the `main()` function.

QUESTION 2
In Question 2, I created a separate function called `printHelloWorld()` that prints “Hello World!” and then called that function inside `main()`. Using `void`, I was able to show how to call functions in C++ and use separate logic from the main program.

QUESTION 3
For Question 3, I wrote a function that calculates the expression `a * b + 200`. The function takes two integer parameters, performs the calculation, and prints the result three times using a loop. I used `namespace std` to avoid writing std every time its needed, and use `void SimpleMath` and a for loop to print an answer after taking in integers a and b.  

QUESTION 4
Question 4 is similar to Question 3, but the function calculates `a * b + 20.51` using `double` variables instead of integers. This ensures that decimal values are handled correctly. The function is again called and the result is displayed multiple times, where I add a for loop from 0-3 to print the answer 3 times.

QUESTION 5
In Question 5, I developed a program that reads a set of integers from the user and calculates their sum. The program first asks how many numbers the user wants to enter, using `cin >>`, then uses a loop to read each value and add it to a running total. After all inputs are collected, the final sum is displayed. I used `cin`, loop control, and an accumulator variable.

QUESTION 6
Finally, for Question 6, I implemented a function that prints all numbers between two user-defined integers, `a` and `b`. If `a` is greater than or equal to `b`, the program prints the error message “Error: b must be greater than a.” Otherwise, it prints all integers strictly between the two values. I did this by using `cin` for user input and then using `void Counting Up` where I used the user inputs and then repeating every increment from a till right before b. I use `new_number = a + 1` to start the print and did the incremental printing until `b-1`. 
