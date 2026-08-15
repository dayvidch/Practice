class Solution {
public:
    int romanToInt(string s) {

        unordered_map<char, int> values = {
            {'I', 1},
            {'V', 5},
            {'X', 10},
            {'L', 50},
            {'C', 100},
            {'D', 500},
            {'M', 1000},
        };

        int result = 0;

        for(int x = 0; x < s.length(); x++){
            if(values[s[x]] < values[s[x+1]]){
                result -= values[s[x]];
            }
            else{
                result += values[s[x]];
            }
        }

        return result;
        
    }
};