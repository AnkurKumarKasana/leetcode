class Solution {
public:
    string triangleType(vector<int>& nums) {
        set<int>ans(nums.begin(),nums.end());
        sort(nums.begin(),nums.end());
        if((nums[0] + nums[1])<=nums[2]) return "none";
        if(ans.size() == 1) return "equilateral";
        if(ans.size() == 2) return "isosceles";
        return "scalene";
    }
};