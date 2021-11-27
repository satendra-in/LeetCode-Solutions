class Solution {
public:
    int reverse(int x) {
        if(x>-10 && x<10) return x;
        int n = abs(x);
        long rev = 0;
        while(n>0)
        {
            short int rem = n%10;
            rev = rev*10 + rem;
            n = n/10;
        }
        if(rev>2147483647) rev = 0;
        if(x<0)
            return rev*-1;
        else
            return rev;
        
    }
};