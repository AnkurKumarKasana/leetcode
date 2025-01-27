class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& arr) {
        int i=0,j=0,mx=0;
        int n=arr.size();
        while(j<n){
            if(arr[j]==1)j++;
            else{
                mx=max(mx,j-i);
                j++;
                i=j;
            }
        }
        return max(mx,j-i);
    }
};