class Solution {
public:
    int minAddToMakeValid(string s) {
        int o = 0, e = 0;

        for (char ch : s) {
            if (ch == '(')
                o++;
            else {
                if (o > 0)
                    o--;
                else
                    e++;
            }
        }

        return o + e;
    }
};