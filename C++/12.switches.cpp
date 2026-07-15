#include <iostream>

int main(){
    //alternative of using too many if else statements

    int month;
    std::cout << "enter a month 1-12. ";
    std::cin >> month;

    switch(month){
        case 1:
            std::cout << "January, you pretend to see life clearly, yearly";
            //break to break out od the case
            break;
        case 2:
            std::cout << "February is the time that you put the evil eye and the pride aside";
            break;
        case 3:
            std::cout << "March got you already second guessin' titles";
            break;
        case 4:
            std::cout << "April, spring is here and just like a spring, you start to spiral";
            break;
        case 5:
            std::cout << "May brings some warmer days, poolside, gettin' very tan";
            break;
        case 6:
            std::cout << "June have you movin' ice-cold, goin' back and forth with a married man";
            break;
        case 7:
            std::cout << "July, that's when I found out you lied";
            break;
        case 8:
            std::cout << "August, it was baby this, baby that like you had your tubes tied";
            break;
        case 9:
            std::cout << "September, we fallin' off, but I'm still the man you tryna win over";
            break;
        case 10:
            std::cout << "October is all about me 'cause your turn should've been over";
            break;
        case 11:
            std::cout << "November got you moodboardin' for next year and you're single";
            break;
        case 12:
            std::cout << "December the gift-givin' month and now you wanna rekindle our year";
            break;
        //if nothing matches, then it runs this default statement
        default:
            std:: cout << "enter a number 1-12 for drake lyrics.";

    char grade;
    std::cout << "enter your grade: ";
    std::cin >> grade;

    switch(grade){
        case 'a':
            std::cout << "perfect";
            break;
        case 'b':
            std::cout << "average";
            break;
        case 'c':
            std::cout << "not good";
            break;
        case 'd':
            std::cout << "trash";
            break;
        case 'f':
            std::cout << "fucking terrible";
            break;
        default:
            std::cout << "enter a correct grade";
    }
        
    }

    return 0;
}