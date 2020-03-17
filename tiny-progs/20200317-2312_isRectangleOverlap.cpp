class Solution {
public:
    bool isRectangleOverlap(vector<int>& rec1, vector<int>& rec2) {
        bool x_no_overlap = rec1[0] >= rec2[2] || rec1[2] <= rec2[0];
        bool y_no_overlap = rec1[1] >= rec2[3] || rec1[3] <= rec2[1];
        if (x_no_overlap || y_no_overlap) return false;
        return true;
    }
};