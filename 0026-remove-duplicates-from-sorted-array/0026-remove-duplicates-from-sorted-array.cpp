class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int j=0;
        for(int i=1;i<nums.size();i++){
            if(nums[j] != nums[i]){
                j++;
                swap(nums[i], nums[j]);
        }
        }return j+1;
    }
};