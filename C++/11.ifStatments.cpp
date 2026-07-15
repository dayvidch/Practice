#include <iostream>
//order matters. the first true if statment will be executed, then all the other if else won't run.

int main(){
    int age;
    std::cout << "What is your age? ";
    std::cin >> age;

    if (age >= 100){
        std::cout << "You are too old to enter this site.";
    }
    else if(age >= 18){
        std::cout << "Welcome to the site.";
    }
    else if (age < 0){
        std::cout << "You are not born yet.";
    }
    else{
        std::cout << "You are not old enough to enter.";
    }

    return 0;
}