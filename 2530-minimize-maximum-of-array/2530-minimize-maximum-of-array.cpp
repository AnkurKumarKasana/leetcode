class Solution {
public:
    bool isValid(vector<int>& nums, int mid,int n){
        vector<long long>arr(begin(nums),end(nums));
        for(int i=0;i<n-1;i++){
            if(arr[i]>mid)
            return false;

            long long buffer=mid-arr[i];
            arr[i+1]-=buffer;
        }
        return arr[n-1]<=mid;
    }
    int minimizeArrayValue(vector<int>& nums) {
        int n=nums.size();
        int l=0;
        int r= *max_element(begin(nums),end(nums));
        int result=0;
        while(l<=r){
            int mid=l+(r-l)/2;
            if(isValid(nums,mid,n)){
                result= mid;
                r=mid-1;
            }else{
                l=mid+1;
            }
        }
        return result;
        
    }
};