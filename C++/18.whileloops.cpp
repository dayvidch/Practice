#include <iostream>

int main(){
    std::string infinite;

    while(infinite.empty()){
        std::cout << "Do you want to start the infinite loop? : ";
        std::getline(std::cin, infinite);
    }
    
    while(1==1){
        std::cout << "InFnItE LoOp";
    }
}