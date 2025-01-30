class Solution {
public:
    int search(vector<int>& a, int target) {
        int n=a.size();
        int s=0;
        int e=n-1;
        while(s<=e){
            long mid =s+(e-s)/2;
            if(a[mid]==target){
            return mid;
            }else if (a[mid]>target){
                e =mid-1;
                }else if (a[mid] <target)
                s=mid+1;
        }
        return -1;
    }
};