#include <iostream>

int main(){

    std::string name;

    std::cout << "Enter your name: ";
    std::getline(std::cin, name);
    
    //length function
    if(name.length() > 12){
        std::cout << "Long ass name you got there\n";
    }
    else{
        std::cout << "Welcome to the club " << name << "\n";
    }

    //empty function - returns a boolean, either true or false
    if(name.empty()){
        std::cout << "You did not enter your name";
    }
    else{
        std::cout << "Hello " << name << "\n";
    }

    //append function
    name.append("@gmail.com");
    std::cout << "Your gmail is: " << name << "\n";

    //return the character at a given index
    std::cout << "The first letter in your name is: " << name.at(0) << "\n";

    //insert function (index, insert)
    name.insert(0, "@");
    std::cout << name << "\n";

    //find index of specified character
    std::cout << name.find("d") << "\n";

    //erase function (start,end not inclusive)
    name.erase(0,3);
    std::cout << name;

    //clear function
    name.clear();
    std::cout << name;



}
