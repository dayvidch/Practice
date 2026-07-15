#include <iostream>

int main(){

    int students = 10;  

    //addition
    students += 1;
    //++ increments by 1
    students++,
    std::cout << students << "\n";


    //subtraction
    students -= 1;
    //-- decrements by 1
    students--;
    std::cout << students << "\n";


    //multiplication
    students *= 2;
    std::cout << students << "\n";


    //division
    students /= 2;
    std::cout << students << "\n";


    //remainders
    int classA = 20;
    classA /= 3;
    std::cout << "since classA is an int type, 20/3 gives a remainder, and it is just truncated because it can only store an int. classA = "<< classA << "\n";
    double classB = 20;
    classB /= 3;
    std::cout << "But if it was a double type like classB, then it will show the remainders. classB = "<< classB << "\n";

    
    //moduleo
    int classC = 20;
    int remainder = classC % 3;
    std::cout <<  "remainder is: " << remainder << "\n";

    return 0;
}