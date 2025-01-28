class Solution {
public:
    int largestRectangleArea(vector<int>& arr) {
        stack <int> s;
        int ans =0;
        arr.push_back(0);
        int n=arr.size();
        for(int i=0;i<n;i++){
            while(s.size() and arr[s.top()]>= arr[i]){
                int x=arr[s.top()];
                s.pop();
                int j=s.size()?s.top():-1;
                ans=max(ans,x*(i-j-1));

            }
            s.push(i);
        }
        return ans;
        
    }
};