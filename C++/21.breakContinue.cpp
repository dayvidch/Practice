#include <iostream>

int main(){

    //break = break out of the loop
    //continue = skip that iteration

    for(int i = 0; i <= 10; i++){

        //skips 4
        if(i == 4){
            continue;
        }

        //stops at 8
        if(i == 9){
            break;
        }
        
        std::cout << i << "\n";
    }

    return 0;
}