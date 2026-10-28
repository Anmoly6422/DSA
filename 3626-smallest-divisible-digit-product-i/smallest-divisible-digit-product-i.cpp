class Solution {
public:
     int productofdigit(int n){
        int product=1;
        while(n>0){
            product*=n%10;
            n/=10;
        }
        return product;
     }
    int smallestNumber(int n, int t) {
        while(true){
            if(n==0) return 0;
            if(productofdigit(n)%t==0){
                return n;
            }
            n++;
        }
    }
};