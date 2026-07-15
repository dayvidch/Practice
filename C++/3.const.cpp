#include <iostream>
int main(){
    //The conts keyword specifies that a variable's value is constant
    //tells compliler it cannot modify it, read only
    //standard naming conventions of constant variables are all uppercase

    const double PI = 3.14159;
    double radius = 10;
    double circumference = 2 * PI * radius;
    std::cout << circumference << "cm" << "\n";

}