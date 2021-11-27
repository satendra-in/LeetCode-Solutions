class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        
        int n = digits.size();
        if(digits[n-1] < 9){
            digits[n-1] += 1;
            return digits;
        }
        
        //vector<int> ans;
        bool maxForNUmberOfDigits = true;
        for(int digit : digits){
            if(digit != 9) {
                maxForNUmberOfDigits = false;
                break;
            }
        }
        if(maxForNUmberOfDigits){
            //cout<<digits[0];
            digits[0] = 1;
            for(int i = 1; i < n; i++)
                digits[i] = 0;
            digits.push_back(0);
            return digits;
        }
        
        digits[n-1] = 0;
        for(int i = n-2; i >= 0; i--){
            if(digits[i] < 9){
                digits[i] += 1;
                break;
            }
            digits[i] = 0;
        }
        
        return digits;
        
    }
};