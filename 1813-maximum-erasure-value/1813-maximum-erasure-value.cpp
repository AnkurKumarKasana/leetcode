class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        unordered_map<int,int> seen;
        long long sum=0,maxsum=0,i=0;
        for(int j=0;j<nums.size();j++){
            int num= nums[j];
            if(seen.count(num)){
                int index=seen[num];
                while(i<=index){
                    sum-=nums[i];
                    i++;
                }
            }
            sum+=num;
            seen[num]=j;
            maxsum= max (sum,maxsum);
        }return maxsum;
    }
};