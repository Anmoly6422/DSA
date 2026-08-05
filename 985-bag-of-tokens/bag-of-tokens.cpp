class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
        sort(tokens.begin(), tokens.end());

        int left = 0;
        int right = tokens.size() - 1;

        int score = 0;
        int maxScore = 0;

        while (left <= right) {
            // Play face up
            if (power >= tokens[left]) {
                power -= tokens[left];
                score++;
                maxScore = max(maxScore, score);
                left++;
            }
            // Play face down
            else if (score > 0) {
                power += tokens[right];
                score--;
                right--;
            }
            // Can't make any move
            else {
                break;
            }
        }

        return maxScore;
    }
};