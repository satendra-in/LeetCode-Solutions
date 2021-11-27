class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        
        if(nums.size() == 0) return 0;
        int start = 0; int end = nums.size() - 1;
        //for(int i = 0; i < nums.size(); i++){
            //if(nums[i] >= target) return i;
       // }
        //return nums.size();
        int mid;
        while(start <= end){
            mid = (start + end)/2;
            if(nums[mid] == target) return mid;
            if(nums[mid] > target) end = mid-1;
            else start = mid + 1;
            
        }
        return nums[mid] > target? mid: mid+1;
        
    }
};