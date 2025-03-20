class Solution {
public:
    
    int findleft(vector<int>& arr, int target,int n){
        int l=0,r=n-1;
        int leftmost=-1;
        while(l<=r){
            int mid=l+(r-l)/2;
            if(arr[mid]==target){
                leftmost=mid;
                r=mid-1;
            }else if(arr[mid]<target){
                l=mid+1;
            }else{
                r=mid-1;
            }
        }
        return leftmost;
    }
    int findright(vector<int>& arr, int target,int n){
        int l=0,r=n-1;
        int rightmost=-1;
        while(l<=r){
            int mid=l+(r-l)/2;
            if(arr[mid]==target){
                rightmost=mid;
                l=mid+1;
            }else if(arr[mid]<target){
                l=mid+1;
            }else{
                r=mid-1;
            }
        }
        return rightmost;

    }
    vector<int> searchRange(vector<int>& arr, int target) {
        int n= arr.size();
        int leftmost= findleft(arr,target,n);
        int rightmost=findright(arr,target,n);
        return {leftmost,rightmost};
        
    }
};