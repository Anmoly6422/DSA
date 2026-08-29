class Solution {
public:
    int reverse(int x) {
        long rev=0,num,n=x;
        while(n!=0){
            num=n%10;
            n/=10;
            rev=rev*10+num;
        }
        if(rev > INT_MAX || rev < INT_MIN){
            return 0;
        }
        return rev;
    }
};