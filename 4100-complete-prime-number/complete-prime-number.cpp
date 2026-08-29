class Solution {
public:
   bool isprime(int n){
        if(n < 2) return false;

        for(int i = 2; i * i <= n; i++){
            if(n % i == 0){
                return false;
            }
        }
        return true;
   }

    bool completePrime(int num) {
        int i = 0;
        int suf = 0;

        while(num){
            suf = (num % 10) * pow(10, i) + suf;

            if(!isprime(num)) return false;
            if(!isprime(suf)) return false;

            num /= 10;
            i++;
        }

        return true;
    }
};