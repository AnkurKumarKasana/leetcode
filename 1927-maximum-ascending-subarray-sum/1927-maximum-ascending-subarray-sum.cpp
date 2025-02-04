class Solution {
public:
    int maxAscendingSum(vector<int>& a) {
        int temp=a[0], maxi=a[0];
        int n= a.size();
        for(int i=1;i<n;i++){
            if(a[i]>a[i-1])temp+=a[i];
            else temp=a[i];
            maxi=max(maxi,temp);
        }
        return maxi;
        
    }
};