class Solution {
public:
    bool kLengthApart(vector<int>& nums, int k) {
        int last_position = -1;

        for (int i = 0; i < nums.size(); ++i) {
            if (nums[i] == 1) {
                if (last_position != -1 && (i - last_position - 1) < k) {
                    return false;
                }
                last_position = i;
            }
        }
        return true;
    }
};
