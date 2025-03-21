class Solution {
public:
    int findpivot(vector<int>& nums,int l,int r){
        while(l<r){
            while(l<r && nums[l]==nums[l+1])l++;
            while(l<r && nums[r]==nums[r-1])r--;
            int mid=l+(r-l)/2;
            if(nums[mid]>nums[r]){
                l=mid+1;
            }else{
                r=mid;
            }
        }return r;
    }
    bool binarysearch(int l,int r, vector<int>& nums, int target){
        while(l<=r){
            int mid=l+(r-l)/2;
            if(nums[mid]==target)return true;
            else if(nums[mid]>target) r=mid-1;
            else if(nums[mid]<target)l=mid+1;
        }return false;
    }
    bool search(vector<int>& nums, int target) {
        int n=nums.size();
        int pivotindex=findpivot(nums,0,n-1);
        if(binarysearch(0,pivotindex-1,nums,target)){
            return true;
        }
        return binarysearch(pivotindex,n-1,nums,target);
    }
};


