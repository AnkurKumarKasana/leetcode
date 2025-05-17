class Solution {
public:
    int maxProfit(vector<int>& arr) {
        int mini=arr[0];
        int profit=0;
        for(int i=0;i<arr.size();i++){
            int temp=arr[i]-mini;
            profit=max(temp,profit);
            mini=min(mini,arr[i]);
        }
        return profit;
    }
};