class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        //key = number, value = index
        map<int, int> seen = {};

        for(int x = 0; x < nums.size(); x++){
            int searchingFor = target - nums[x];
            if(seen.find(searchingFor) != seen.end()){
                return {x, seen[searchingFor]};
            }
            else{
                seen.insert({nums[x], x});
            }

        }
        return {};
    }

};