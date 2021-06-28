class Solution {
public:
    string removeDuplicates(string s) {
        int c = 0;
       // int l = ;
        while(s.size() != 0 && c!=s.size())
        {
            if((c+1) != s.size() && s[c] == s[c+1]){
                if(c==0)
                    s = s.substr(2);
                else{
                    s = s.substr(0, c) + s.substr(c+2);
                    c -= 1;
                }
                continue;  
            }
            c++;
        }
        return s;
    }
};