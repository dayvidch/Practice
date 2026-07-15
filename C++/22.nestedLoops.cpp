#include <iostream>

int main(){

    for(int i = 0; i <= 3; i++){
        for(int j = 1; j <= 10; j++){
            std::cout << j << " ";
        }
        std::cout << "\n";
    }

    std::cout << "-------------- square game -------------- \n";

    int rows;
    int columns;
    char symbol;

    std::cout << "enter how much ROWs you want: ";
    std::cin >> rows;

    std::cout << "enter how much COLUMNs you want: ";
    std::cin >> columns;

    std::cout << "what symbol would you like to use: ";
    std::cin >> symbol;

    for(int i = 1; i<= rows; i++){
        for(int j = 1; j <= columns; j++){
            std::cout << symbol;
        }
        std::cout << "\n";
    }

    return 0;
}