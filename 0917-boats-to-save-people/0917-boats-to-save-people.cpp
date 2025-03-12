class Solution {
public:
    int numRescueBoats(vector<int>& arr, int limit) {
        sort(arr.begin(),arr.end());
        int s=0;
        int e=arr.size()-1;
        int ans=0;
        while(s<=e){
            if(arr[s]+arr[e]<=limit){
                s++;
            }
            e--;
            ans++;

        }
        return ans;
        
        
    }
};