class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        /*
        if(m == 0){
            nums1 = nums2;
            return;
        }
        if(n == 0) return;
        int mm = 0; int nn = 0; int idx = 0;
        vector<int> ans;
        while(mm < m && nn < n){
            if(nums1[mm] < nums2[nn]){
                ans.push_back(nums1[mm]);
                mm++;
            }
            else{
                ans.push_back(nums2[nn]);
                nn++;
            }
        }
        while(mm < m){
            ans.push_back(nums1[mm]);
            mm++;
        }
        while(nn < n){
            ans.push_back(nums2[nn]);
            nn++;
        }
        for(int i = 0; i < (m+n); i++){
            nums1[i] = ans[i];
        }
        */
        int mi = m - 1;
        int ni = n - 1;
        int i = m + n - 1;
        
        while (i >= 0) {
            if (ni < 0 || mi >= 0 && nums1[mi] > nums2[ni]) {// 1 or (2 and 3)
                nums1[i--] = nums1[mi--];
            } else {
                nums1[i--] = nums2[ni--];
            }
        }
    }
};