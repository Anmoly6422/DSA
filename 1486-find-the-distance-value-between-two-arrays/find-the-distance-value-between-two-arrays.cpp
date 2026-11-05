class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1,
                             vector<int>& arr2, int d) {

        int res = 0;

        for(int a : arr1) {

            bool found = false;

            for(int b : arr2) {

                if(abs(a - b) <= d) {
                    found = true;
                    break;
                }
            }

            if(!found) {
                res++;
            }
        }

        return res;
    }
};