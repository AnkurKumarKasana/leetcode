class Solution {
public:
    void sortColors(vector<int>& arr) {
        for(int i=0;i<arr.size();i++){
            int mini=i;
            for(int j=0;j<arr.size();j++){
                if(arr[mini]<arr[j]){
                    swap(arr[mini],arr[j]);
                }
            }
        }
    }
};