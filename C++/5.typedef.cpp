#include <iostream>
#include <vector>

//typedef is a reserved word used to create another name (alias) for another datatype. New identifier for existing datatype.
//helps with readability and reduces typos

                    //_t is a naming convention for typedef
typedef std::string text_t;
typedef int number_t;

//replaced with using (works better with templates)
using text_t = std::string;
using number_t = int;

int main(){

    text_t name = "David";
    std::cout << name << "\n";

    number_t age = 18;
    std::cout << age <<"\n";

    return 0;
}