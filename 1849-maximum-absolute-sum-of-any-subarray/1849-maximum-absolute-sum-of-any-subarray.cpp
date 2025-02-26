class Solution {
public:
    int maxAbsoluteSum(vector<int>& arr) {
        int n= arr.size();
        int maxi=0,mini=0;
        int maxsum =0 ,minsum=0;
// use kadane's algo for 2 times 
// 1 time for maxsum 
// 1 time for min sum 
        for (int i=0;i<n;i++){
            maxsum+=arr[i];
            minsum+=arr[i];

            maxi=max(maxi,maxsum);
            mini=min(mini,minsum);
            if(maxsum<0)maxsum=0;
            if(minsum>0)minsum=0;

        }
//return max of maxi and abs(mini);
        return max(maxi, abs(mini)); ;
    }
};