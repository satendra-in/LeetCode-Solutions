class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mp;
        vector<int> ans;
        mp[target-nums[0]] = 1;
        for(int x=1; x<nums.size(); x++)
        {
            if(mp[nums[x]]){
                ans.push_back(mp[nums[x]]-1);
                ans.push_back(x);
                    break;
            }
            mp[target-nums[x]] = x+1;
        }
        return ans;
    }
};