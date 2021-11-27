/*
Given an integer array nums, return all the triplets [nums[i], nums[j], nums[k]] such that i != j, i != k, and j != k, and nums[i] + nums[j] + nums[k] == 0.

Notice that the solution set must not contain duplicate triplets.

 

Example 1:

Input: nums = [-1,0,1,2,-1,-4]
Output: [[-1,-1,2],[-1,0,1]]
Example 2:

Input: nums = []
Output: []
Example 3:

Input: nums = [0]
Output: []
 

Constraints:

0 <= nums.length <= 3000
-105 <= nums[i] <= 105

*/


class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        
        int n = nums.size();
        map<int,int> m;
        sort(nums.begin(),nums.end());
        vector< vector<int>> ans;
        
        for(int i=0;i<n;i++) m[nums[i]] = i;
        
        for(int i=0;i<n;i++){
            int x = nums[i];
            if(i>0 && nums[i] == nums[i-1]) continue;
            for(int j=i+1;j<n;j++){
                int y = nums[j], z = -x - y;
                if(i+1!=j && nums[j]==nums[j-1]) continue;
                if(m.count(z) && m[z] > j){
                    vector<int> tmp {x,y,z};
                    ans.push_back(tmp);
                }
            }
        }
        return ans;
    }
};

/*
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> v1;
        set<vector<int>> v;
        int n = nums.size();
        if (n<3){
            return v1;
        }
        int l, r;
        sort(nums.begin(), nums.end());
        
        for (int i = 0; i<n; i++){
            l = i+1; r= n-1;
            while(l<r){
                if(nums[i] + nums[l] + nums[r] ==0){
                    
                    v.insert({nums[i], nums[l], nums[r]});
                    l++;r--;
                }
                else if (nums[i] + nums[l] + nums[r] >0){
                    r--;
                }
                else{
                    l++;
                }
            }
        }
        for(auto i=v.begin(); i!=v.end(); i++){
            v1.push_back(*i);
        }
        return v1;
        
    }
};
*/