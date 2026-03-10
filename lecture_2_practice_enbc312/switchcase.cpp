#include <iostream>
int main(){
    int month;
    std::cout << "Enter the month 1-12: ";
    std::cin >> month;

    switch(month){
        case 1:
            std::cout << "It is Janurary1";
            break;
        case 2:
            std::cout << "It is Janurary2";
            break;
        case 3:
            std::cout << "It is Janurary3";
            break;
        case 4:
            std::cout << "It is Janurary4";
            break;
        case 5:
            std::cout << "It is Janurary5";
            break;
        default:
            std::cout << "Yeah you're dumb";
            break;

    }
    return 0;
}