class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s.size() == 1 or s.size() == 0) return s.size();
        int ans = INT_MIN;
        unordered_map<char, int> mp;
        unordered_map<char, int> np;
        int cur = 1; int a = 0;
        mp[s[0]] = 1; np[s[0]] = 1;
        for(int i = 1; i<s.size(); i++)
        {
            if(mp[s[i]] && a < np[s[i]] )
            {
                ans = max(ans, cur);
                cur = i - np[s[i]] +1;
                a = np[s[i]];
                np[s[i]] = i+1;
                //mp = {};
                mp[s[i]] = 1;
            }
            else
            {
                mp[s[i]] = 1;
                np[s[i]] = i+1;
                cur++;
            }
        }
        return max(ans, cur);
        
    }
};