class Solution {
public:
    string convert(string s, int numRows) {
        int n = s.size();
        if(n == numRows || numRows == 1) return s;
        string res = "";
        int step = 2*numRows-2;
        for(int i = 0; i<numRows; ++i)
        {
            int j = i;
            while(j<n)
            {
                res = res + s[j];                
                if(i == 0 || i==numRows-1) j += step;
                else
                {
                    j += (step - 2*i);
                    if(j<n) res = res + s[j];
                    j += (2*i);
                }
            }
        }
        return res;
    }
};

/*
class Solution {
public:
    string convert(string s, int numRows) {
        int n = s.size();
        if(n == numRows || numRows == 1) return s;
        string arr[numRows];
        string res = "";
        int j = 0; bool dir = 1;
        for(int i = 0; i<n; ++i)
        {
            if(j == numRows) {j -= 2; dir = 0;}
            if(j == -1) {j = 1; dir = 1;}
            arr[j] = arr[j]+s[i];
            if(dir) j++;
            else j--;
        }
        for(string aa : arr) res = res + aa;
        return res;
    }
};
*/