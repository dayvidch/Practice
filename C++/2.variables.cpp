#include <iostream>

// to make a variable you need 1. decloration, and 2. assignment 
int main(){
    
    //integers (whole numbers)
    int x; //declaring variable x as an integer type
    x = 5; // assigning x to 5
    int y = 10; // declaring variable y and assigning it to 10 at the same time
    int sum = x + y;

    std::cout << x << "\n";
    std::cout << y << "\n";
    std::cout << sum <<"\n";

    //if you store a double type, it will be truncated
    int a = 7.5;
    std::cout << "7.5 is truncated to "<< a << "\n";


    //double (number including decimal)
    double price = 10.99;
    std::cout << price << "\n";


    //char (single character) hvae to use single '', not ""
    char grade = 'A';
    std::cout << grade << "\n";

    //if you store multiple characters, it will just store the last one
    char b = 'multiple';
    std::cout << b << '\n';


    //boolean (true or false)
    bool student = true;
    bool power = true;
    bool sale = false;
    std::cout << student << "\n";


    //string(sequence of texts)
    std::string name = "David";
    std::string location = "Korea";

    std::cout << name << " is in " << location << " currently.";
}