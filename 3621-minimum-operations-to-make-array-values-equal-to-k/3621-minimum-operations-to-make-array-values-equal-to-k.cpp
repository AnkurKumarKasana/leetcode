class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);
        int ans=0;
        array<int,101>arr={};
        for(int it:nums)
        {
            if(it<k)return -1;
            else if(it>k) arr[it]++;
        }
        for(int val:arr)if(val>0)ans+=1;
        return ans;
    }
};