#include <iostream>
#include <cmath>

int main(){
    double x = 3;
    double y = 4;
    double z;

    //max and min function
    z = std::max(x,y);
    std::cout << z << "\n";

    z = std::min(x,y);
    std::cout << z << "\n";

    //power function, 2 to the power of 3 is 8
    z = pow(2, 3);
    std::cout << z << "\n";

    //squareroot
    z = sqrt(9); 
    std::cout << z << "\n";

    //absolute value
    z = abs(-5); 
    std::cout << z << "\n";

    //round
    z = round(3.14 ); 
    std::cout << z << "\n";

    //ceiling - round up no matter what
    z = ceil(3.14 ); 
    std::cout << z << "\n";

    //floor - round down no matter what
    z = floor(3.99 ); 
    std::cout << z << "\n";

    
}