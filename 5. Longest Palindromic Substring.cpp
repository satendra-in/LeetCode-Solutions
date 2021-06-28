class Solution {
public:
    string longestPalindrome(string s) {
        int n = s.size();
        vector<vector<bool>> dp(n,vector<bool>(n,false));
        int ml = 1; int start = 0;
        for(int i=0;i<n;i++)
        {
            dp[i][i]=true;
            if(i!=n-1 && s[i]==s[i+1] ){
                dp[i][i+1]=true; ml = 2; start = i;
            }
                
        }
        for (int k = 3; k <= n; ++k) {
            // Fix the starting index
            for (int i = 0; i < n - k + 1; ++i) {
                // Get the ending index of substring from
                // starting index i and length k
                int j = i + k - 1;
 
                // checking for sub-string from ith index to
                // jth index iff str[i+1] to str[j-1] is a
                // palindrome
                if (dp[i + 1][j - 1] && s[i] == s[j]) {
                    dp[i][j] = true;
 
                    if (k > ml) {
                        start = i;
                        ml = k;
                    }
                }
            }
        }
        return s.substr(start, ml);
    }
};