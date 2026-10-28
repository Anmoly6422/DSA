class Solution {
public:
    int totalNumbers(vector<int>& digits) {
        vector<int> freq(10);

        for(int d : digits)
            freq[d]++;

        int count = 0;

        for(int num = 100; num < 1000; num += 2) {
            int a = num / 100;
            int b = (num / 10) % 10;
            int c = num % 10;

            // Temporarily use the digits
            freq[a]--;
            freq[b]--;
            freq[c]--;

            // Check if all required digits were available
            if(freq[a] >= 0 && freq[b] >= 0 && freq[c] >= 0)
                count++;

            // Restore the frequencies
            freq[a]++;
            freq[b]++;
            freq[c]++;
        }

        return count;
    }
};