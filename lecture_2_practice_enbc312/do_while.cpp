#incluide <iostream>

int main(){
    int number;

    do{
        std::cout << "Enter a number: ";
        std::cin >> number;
    }while(number < 50);
    return 0;
}