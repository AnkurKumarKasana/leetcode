class Solution {
public:
    int longestOnes(vector<int>& arr, int k) {
        int mx=0;
        int i=0,j=0;
        while(j<arr.size()){
            if(arr[j]==0){
                k--;
            }
            while(k<0){
                if(arr[i]==0){
                    k++;
                }
                i++;
                }
                mx=max(mx,j-i+1);
                j++;
            }return mx;
        }


        
    
};