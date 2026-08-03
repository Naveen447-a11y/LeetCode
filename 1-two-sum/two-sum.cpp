class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        unordered_map<int, int> mp;

        for(int i = 0; i < nums.size(); i++) {

            int remaining = target - nums[i];

            // check if remaining number already exists
            if(mp.find(remaining) != mp.end()) {
                return {mp[remaining], i};
            }

            // store current number and index
            mp[nums[i]] = i;
        }

        return {};
    }
};