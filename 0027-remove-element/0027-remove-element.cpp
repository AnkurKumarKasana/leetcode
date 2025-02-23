class Solution {
public:
    int removeElement(vector<int>& arr, int val) {
        int ans=0;
        for(int i=0;i<arr.size();i++){
            if(arr[i]!=val){
                arr[ans]=arr[i];
                ans++;
            }
        }return ans;        
    }
};