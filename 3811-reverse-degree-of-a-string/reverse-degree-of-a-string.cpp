class Solution {
public:
    int reverseDegree(string s) {
        int res=0;
        for(int i=0;i<s.length();i++){
          int rev=26-(s[i]-'a'+1)+1;
         res += rev * (i + 1);
            
        }
        return res;
        
    }
};