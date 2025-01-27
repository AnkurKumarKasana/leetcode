class Solution {
public:
    double findMedianSortedArrays(vector<int>& arr, vector<int>& brr) {
        int i=0 ,j=0, m= arr.size(), n=brr.size();
        vector <int> ans;
        while (i<m && j<n){
            if(arr[i]<brr[j]){
                ans.push_back(arr[i]);
                i++;
        }else{
            ans.push_back(brr[j]);
            j++;
        }
    }
    while (j<n){
        ans.push_back(brr[j]);
        j++;
    }while (i<m){
        ans.push_back(arr[i]);
        i++;
    }
    arr=ans;
    int size= ans.size();
    if(size%2!=0){
        return ans[size/2];
    }else{
        return (ans[size/2]+ans[size/2-1])/2.0;
    }
    }
};