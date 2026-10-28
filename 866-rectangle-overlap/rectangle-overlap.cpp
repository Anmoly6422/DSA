class Solution {
public:
    bool isRectangleOverlap(vector<int>& rec1, vector<int>& rec2) {
        bool horizontal = rec1[0] < rec2[2] && rec2[0] < rec1[2];
        bool vertical = rec1[1] < rec2[3] && rec2[1] < rec1[3];

        return horizontal && vertical;
    }
};