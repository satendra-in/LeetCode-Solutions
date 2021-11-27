class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        if(k>=arr.size()) return arr;
        //for(int* p: &arr) p = abs(p-x);
        for(int i=0; i<arr.size(); ++i)
            arr.at(i) = (arr[i]-x);
        int start = 0, end = k-1;
        for(int i=k; i<arr.size(); ++i)
        {
            if(abs(arr[i])<abs(arr[start]) || (x+arr[i]) == (x+arr[start]))
            {
                start++; end++;
            }
            else
                break;
        }
        vector<int> res;
        while(k--)
            res.push_back(x + arr[start++]);
        return res;  
    }
};