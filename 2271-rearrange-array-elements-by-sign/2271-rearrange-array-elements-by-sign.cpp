class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> p,n,ans;
 
        for(int i=0;i<nums.size();i++){
            if(nums[i]>0)p.push_back(nums[i]);
            else n.push_back(nums[i]);
        }
        int mid=nums.size()/2;
        int s=0,e=0;
        while(e<mid){
            ans.push_back(p[s]);
            s++;
            ans.push_back(n[e]);
            e++;
        }
        return ans;
        
    }
};