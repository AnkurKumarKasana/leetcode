class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int maxi=-1;
        int n= nums.size()-1;
        for(int i=0;i<=n;i++){
            int diff=0;
            for(int j=i+1;j<=n;j++){
                if(nums[j]>nums[i]){
                    diff= nums[j]-nums[i];
                    maxi=max(maxi,diff);
                }
            }
        }return maxi;

    }
};