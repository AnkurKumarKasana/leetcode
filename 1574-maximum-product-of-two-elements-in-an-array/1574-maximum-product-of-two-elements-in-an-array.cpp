class Solution {
public:
    int maxProduct(vector<int>& a) {
        int ans=0;
        for(int i=0;i<a.size();i++){
            for(int j=i+1;j<a.size();j++){
                int prod=(a[i]-1)*(a[j]-1);
                ans=max(prod,ans);
            }
        }return ans;
        
    }   
};