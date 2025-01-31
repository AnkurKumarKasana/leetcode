class Solution {
public:
    int largestRectangleArea(vector<int>& a) {
        stack<int> s;
        int ans=0;
        a.push_back(0);
        for(int i=0;i<a.size();i++){
            while(s.size() and a[s.top()]>= a[i]){
                int x=a[s.top()];
                s.pop();
                int j=s.size()?s.top():-1;
                ans=max(ans,x*(i-j-1));

            }s.push(i);
        }return ans;
        
    }
};