class Solution {
public:
    bool isValid(vector<int>& nums, int midmax,int n){
        vector<long long>arr(begin(nums),end(nums));
        for(int i=0;i<n-1;i++){
            if(arr[i]>midmax)
            return false;

            long long buffer=midmax-arr[i];
            arr[i+1]-=buffer;
        }
        return arr[n-1]<=midmax;
    }
    int minimizeArrayValue(vector<int>& nums) {
        int n=nums.size();
        int maxL=0;
        int maxR= *max_element(begin(nums),end(nums));
        int result=0;
        while(maxL<=maxR){
            int midmax=maxL+(maxR-maxL)/2;
            if(isValid(nums,midmax,n)){
                result= midmax;
                maxR=midmax-1;
            }else{
                maxL=midmax+1;
            }
        }
        return result;
        
    }
};