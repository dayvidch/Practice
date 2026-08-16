class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string common_prefix = "";

        for (int current_index = 0; current_index < strs[0].size(); current_index++) {
            for (int x = 0; x < strs.size(); x++) {
                if(current_index >= strs[x].size() || strs[0][current_index] != strs[x][current_index]){
                    return common_prefix;
                }
            }
            common_prefix += strs[0][current_index];
        }
        return common_prefix;
    }
};