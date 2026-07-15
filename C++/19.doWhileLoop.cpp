#include <iostream>

int main(){

    int number;

    do{
        //do this code once first
        std::cout << "Enter a positve number: ";
        std::cin >> number;

    //if this is true, go back to the do block again
    }while(number < 0);

    std::cout << "The postive number is " << number;

    return 0;
}