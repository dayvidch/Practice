//solution is done with math

class Solution {
public:
    bool isPalindrome(int x) {

        //to handle negative numbers. if number is negative, it is never a palindrome
        if(x < 0){
            return false;
        }

        int original = x;
        long reversed = 0;

        while(x != 0){
            int lastDigit = x % 10;
            reversed = reversed * 10 + lastDigit;
            x /= 10;
        }

        if(original == reversed){
            return true;
        }
        else{
            return false;
        }
    }
};