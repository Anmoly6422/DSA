class Solution {
public:
    int countCommas(int n) {
        if(n>=1000){
            int m=n-1000;
        return 1+m;
        }
        return 0;
    }
};