class Solution {
public:
    int findLHS(vector<int>& nums) {
        unordered_map<int, int> m;
        // Step 1: count frequency
        for (int num : nums) {
            m[num]++;
        }
        int maxi = 0;
        // Step 2: check for harmonious subsequence
        for (auto& [key, count] : m) {
            if (m.count(key + 1)) {
                maxi = max(maxi, count + m[key + 1]);
            }
        }
        return maxi;
    }
};
