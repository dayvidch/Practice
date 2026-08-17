#include <iostream>
using namespace std;

void printReverse(int n){

    if(n == 0){
        return;
    }

    cout << n << " ";
    printReverse(n-1);

}

void printForward(int n){

    if(n != 1){
        printForward(n-1);
    }

    cout << n << " ";

}


int main(){
    printReverse(5);
    cout <<endl;
    printForward(5);
    return 0;
}