class Solution {
public:
    int maxProduct(vector<int>& a) {
        int n=a.size();
        sort(a.begin(),a.end());
        // pehle sort karo 
        // fir last or last 2nd element ka product formula se nikal lo 
        return (a[n-1]-1)*(a[n-2]-1);
        
    }   
};