class Solution {
public:
    void merge(vector<int>& arr, int m, vector<int>& brr, int n) {
        vector <int> ans;
        int i=0;
        // first index of first array
        int j=0;
    // first index of second array

        while (i<m && j<n){
            // agar i chota hai j se to i ko push krdo
            if(arr[i]<brr[j]){
                ans.push_back(arr[i]);
                i++;
            }else{
                ans.push_back(brr[j]);
                j++;
            }
        }
        // agar koi ek array chota ho to ye condition chalengi 
        while(j<n){
            ans.push_back(brr[j]);
            j++;
        }
        while(i<m){
            ans.push_back(arr[i]);
            i++;
        }
       arr=ans;

       
    }
};