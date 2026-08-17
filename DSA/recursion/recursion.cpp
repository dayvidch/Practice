#include <iostream>

//Recursion = function calls on itself repeadily to solve a problem.
//each self call of the function is called a recursive call.
//continues until a base case is met.
//function calls itself to execute the same set of instructions but with a smaller input.

void printHello(int n){

        //Base case
        if(n == 0){
            return;
        }

        std::cout << "hello" <<std::endl;

        printHello(n - 1);
    }


// Direct Recursion = function calls itslef dirrectly from within its body
void directRecursion(int n){

    if(n == 0){
        return;
    }
    
    std::cout << n << " ";
    
    directRecursion(n-1);
}

//Head Recursion = recursive call happens before any proccesing in the function
void headRecursion(int n){
    if(n != 0){
        headRecursion(n-1);
    }
    
    std::cout << n << " ";

}

//Tail Recursion = function processes first, and the recursive call is the last operation
void tailRecursion(int n){
    if(n == 0){
        return;
    }
    std::cout << n << " ";

    tailRecursion(n-1);
}

//Tree Recursion = function calls itself more than once within its body, forimg a tree like structure
void treeRecursion(int n){

    if(n == 0){
        return;
    }

    std::cout << n << " ";

    treeRecursion(n-1);
    treeRecursion(n-1);
}

//Nested Recursion = argument to a function is itself, a recursive call.
int nestedRecursion(int n){
    if(n > 100){
        return n-10;
    }

    return nestedRecursion(nestedRecursion(n+11));
}

//Indirect Recursion = does not call itself dirrectly. It calls a different function that evenually calls itself. 
void indirectFunctionA(int);
void indirectFunctionB(int);

void indirectFunctionA(int n){
    if (n > 0){
        std::cout << n << " ";
        indirectFunctionB(n-1);
    }
}

void indirectFunctionB(int n){
    if(n > 0){
        std::cout << n << " ";
        indirectFunctionA(n/2);
    }
}




int main(){

    std::cout << "basic recursion" << std::endl;
    printHello(5);

    std::cout << "dirrect recursion" << std::endl;
    directRecursion(5);
    std::cout << std::endl;

    std::cout << "head recursion" << std::endl;
    headRecursion(5);
    std::cout << std::endl;

    std::cout << "tail recursion" << std::endl;
    tailRecursion(5);
    std::cout << std::endl;

    std::cout << "tree recursion" << std::endl;
    treeRecursion(3);
    std::cout << std::endl;

    std::cout << "nested recursion" << std::endl;
    std::cout << nestedRecursion(95);
    std::cout << std::endl;

    std::cout << "indirect recursion" << std::endl;
    indirectFunctionA(100);
    std::cout << std::endl;

    return 0;

}