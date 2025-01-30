class Solution {
public:
    int findPeakElement(vector<int>& a) {
        int l=0;
        int n=a.size();
        int r=n-1;
        while(l<r){
            int mid=(l+r)/2;
            if(a[mid]>a[mid+1])r=mid;
            else l=mid+1;
        }
        return l;
        
    }
};