#include <iostream>

int main(){
    //converting a value of a datatype to another
    //implicit = automatic
    //explicit = precede value with ew datatype

    double x = (int) 3.14;
    std::cout << x << "\n";

    char y = 100;
    std::cout << y << "\n";
    std::cout << (char) 100 << "\n";

    int correct = 8;
    int questions = 10;
    double score = correct / questions;
    std::cout << "this gives a 0 because for this case when using integer division, 8/10 is .8 which is less than 1 so it is truncated to 0. score = " << score << "\n";
    double correct_score  = correct / (double) questions *100;
    std::cout << "making the dividor a double type works beccause that stores the whple value, and does not truncate. score = " << correct_score << "\n";







    return 0;
}