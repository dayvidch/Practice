#include <iostream>

int main(){
    // cout << (insertion opperator)
    // cin >> (extraction opperator)

    std::string name;
    int age;

    std::cout << "What is your name?: ";
    std::cin >> name;

    std::cout << "What is your age?: ";
    std:: cin >> age;

    std::cout << "Hello, " << name << "\n";
    std::cout << "You are " << age <<" years old." <<"\n";

    std::string fullname;
    std::cout << "Enter your full name: ";
    //use the getline() function to accept a string with spaces. if you dont, it will only accept the first word.
    std::getline(std::cin >> std::ws, fullname);
    std::cout <<"Your full name is: " << fullname;
    return 0;

} 