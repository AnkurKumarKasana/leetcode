class Solution {
public:
    int findMin(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        // int mini=nums[0];
        // for(int i=1;i<nums.size();i++){
        //     if(nums[i]<mini){
        //         mini=nums[i];
        //     }
        // }
        return nums[0];
        
    }
};