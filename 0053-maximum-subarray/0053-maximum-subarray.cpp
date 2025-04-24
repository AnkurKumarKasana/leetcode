class Solution {
public:
    int maxSubArray(vector<int>& arr) {
        int sum=0;
        int maxi=arr[0];
        int n=arr.size();
        for(int i=0;i<n;i++){
            sum+=arr[i];
            maxi=max(sum,maxi);
            if(sum<0){
                sum=0;
            }
        }
        return maxi;
    }
};