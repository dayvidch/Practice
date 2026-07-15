#include <iostream>

int main(){
    // ?: = replacement to the if/else statement
    // condition ? expression1 : expression2

    int grade = 75;
    grade >= 60? std::cout << "You passed." << "\n": std::cout << "You failed." << "\n";

    int number = 10;
    number % 2 == 0? std::cout << "The number is even." << "\n": std::cout << "The number is odd." << "\n";

    bool hungry = true;
    //dont have to do hungry == true. 
    hungry? std::cout << "You are hungry. " << "\n": std::cout << "You are not hungry." << "\n";

    return 0;
}