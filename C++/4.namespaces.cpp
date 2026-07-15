#include <iostream>

namespace first{
    int x = 1;
}

namespace second{
    int x = 2;
}

namespace third{
    int x = 3;
    int y = 4;
}
    
int main(){
    //namespaces allow for entities named with the same variable with different value as long as the namespace is different

    int x = 5;
    std::cout << "if you dont specify the namespace, it will default to the locally assigned variable. x: " << x <<"\n";
                                                                // prefix the variable with the namespace
    std::cout << "The value of x in the first namespace is: " << first::x <<"\n";
    std::cout << "The value of x in the second namespace is: " << second::x <<"\n";

    //you can specify the namespace you want the value to be defualted
    //local variables hold higher power, so namespaces dont work.
    using namespace third;
    std::cout << "Using the third namespace doesnt work for x because I already initalized it to be 5 earlier. x: " << x << "\n";
    std::cout << "Now the defualt value of y is the same third namespace. y: " << y << "\n";

    // using namespace std;
    using std::cout;
    using std::string;

    string name = "david";
    cout << "hello, " << name;

    return 0;
}