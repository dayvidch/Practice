#include <iostream>

int main(){
    
    char op;
    double num1;
    double num2;
    double result;

    std::cout <<"--------------CALCULATOR--------------\n";
     
    std::cout << "enter one: (+, -, *, /)  ";
    std::cin >> op;

    std::cout << "enter #1: ";
    std::cin >> num1;

    std::cout << "enter #2: ";
    std::cin >> num2;

    switch(op){
        case '+':
            result = num1 + num2;
            std::cout << result;
            break; 
        case '-':
            result = num1 - num2;
            std::cout << result;
            break;
        case '*':
            result = num1 * num2;
            std::cout << result;
            break;
        case '/':
            result = num1 / num2;
            std::cout << result;
            break;
        default:
            std::cout << "that wasnt a valid opperation";
    }

    std::cout <<"\n--------------------------------------";

    return 0;

}