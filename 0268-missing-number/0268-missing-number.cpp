class Solution {
public:
    int missingNumber(vector<int>& arr) {
        int totalsum=0,sum=0;
        int n=arr.size();
        totalsum=n*(n+1)/2;
        for(int i=0;i<arr.size();i++){
            sum+=arr[i];
        }
        int ans=totalsum-sum;
        return ans;
    }
};