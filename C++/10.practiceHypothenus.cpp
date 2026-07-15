#include <iostream>
#include <cmath>

int main(){
    double a;
    double b;
    double c;

    std::cout << "enter side length A: ";
    std::cin >> a;

    std::cout << "enter side length B: ";
    std::cin >> b;

    a = pow(a, 2);
    b = pow(b, 2);

    c = sqrt(a + b);

    std::cout << "The hypothenuse is " << c;

    return 0;
}