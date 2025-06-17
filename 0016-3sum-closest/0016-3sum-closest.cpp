class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int mini = INT_MAX;
        int ans=0;
        for(int i=0;i<nums.size();i++){
            int j=i+1;
            int k = nums.size()-1;

            while(j<k){
                int sum = nums[i]+nums[j]+nums[k];
                if(mini>abs(sum-target)){
                    ans=sum;
                    mini=abs(sum-target);
                }
                if(target==sum){
                    return target;
                }
                if(target<sum){
                    k--;
                }
                else{
                    j++;
                }
            }
        }return ans;
    }
};