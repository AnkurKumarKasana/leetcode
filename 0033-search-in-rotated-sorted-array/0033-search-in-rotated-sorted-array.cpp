class Solution {
public:
    int findPivot(vector<int>& arr, int n){//sbse chota number ka index milega isse 
        int l=0,r=n-1;
        while(l<r){
            int mid=l+(r-l)/2;
            if(arr[mid]>arr[r]){
                l=mid+1;
            }else{
                r=mid;
            }
        }return r;
    }


    int binarysearch(int l, int r,vector<int>& arr, int target){//simple binary search 
        while(l<=r){
            int mid=l+(r-l)/2;
            if(arr[mid]==target)return mid;
            else if(arr[mid]>target)r=mid-1;
            else if(arr[mid]<target) l=mid+1;
        }return -1;
    }


    int search(vector<int>& arr, int target) {
        int n=arr.size();
        int pivotindex= findPivot(arr,n);
        int idx=binarysearch(0,pivotindex-1,arr,target);//left side of pivot index
        if(idx!=-1){
            return idx;
        }
        idx=binarysearch(pivotindex,n-1,arr,target);//right side of pivot index
        return idx;
        
    }
};