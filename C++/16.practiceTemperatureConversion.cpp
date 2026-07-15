    #include <iostream>

    int main(){

        double temp;
        char unit;

        std::cout << "---------------- Temperature conversion ----------------\n";

        std::cout << "F = fahrenheit\n";
        std::cout << "C = celcius\n";
        std::cout << "What unit would you like to convert to: ";
        std::cin >> unit;

        if(unit == 'F' || unit == 'f'){
            std::cout << "enter temperature in Celcius: ";
            std::cin >> temp;
            temp = (1.8 * temp) + 32.0;
            std::cout << "The temperature in Fahrenheit is: " << temp << "\n";
        }
        else if(unit == 'C' || unit == 'c'){
            std::cout << "enter temperature in Fahrenheit: ";
            std::cin >> temp;
            temp = (temp - 32) / 1.8;
            std::cout << "The temperature in Celcius is: " << temp << "\n";
        }
        else{
            std::cout << "Enter only F/C";
        }

        std::cout << "--------------------------------------------------------";
        return 0;
    }