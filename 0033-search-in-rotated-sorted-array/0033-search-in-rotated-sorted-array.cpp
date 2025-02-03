class Solution {
public:
    int search(vector<int>& a, int t) {
        int low=0;
        int n=a.size();
        int high=n-1;
        while(low<=high){
            int mid=(low+high)/2;
            if(a[mid]==t) return mid ;
// identify the sorted half first 
            if(a[low]<=a[mid]){//left sorted
                if(a[low]<=t && t<=a[mid]){
                high=mid-1;//eliminate right half 
                }
            else{
                low=mid+1;
         }
    }
        else{
            if(a[mid]<=t && t<=a[high]){
                //left eliminate 
                low=mid+1;
            }else high=mid-1;
        }
     }return -1;
        
    }
};