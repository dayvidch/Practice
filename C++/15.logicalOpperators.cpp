#include <iostream>

int main(){
    // && checks if two conditons are true
    // || checks if at least one of the two conditons are true
    // !  referses the logical statement if its an opperand

    int temp;
    std::cout << "what is the temperature? ";
    std::cin >> temp;

    bool sunny = true;

    if(temp > 0 && temp < 30){
        std::cout << "the temperature is good" << "\n";
    }
    else{
        std::cout << "the temperature is bad" << "\n";
    }

    //only one of these have to be true for it to run
    if( temp >= 0 || temp <= 30){
        std::cout << "maybe we can go swimming?" << "\n";
    }
    else{
        std::cout << "we should not swim" << "\n";
    }

    if(!sunny){
        std::cout << "It is cloudy";
    }
    else{
        std::cout << "It is sunny";
    }

    return 0;
}