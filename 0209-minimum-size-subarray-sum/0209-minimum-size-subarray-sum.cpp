class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int left = 0, sum = 0, minlen = INT_MAX;
        for (int right = 0; right < nums.size(); ++right) {
            sum += nums[right]; // expand window
            
    // shrink window while condition is met
        while (sum >= target) {
            minlen = min(minlen, right - left + 1); 
            sum -= nums[left++];
            }
        }
        return minlen == INT_MAX ? 0 : minlen;
    }
};