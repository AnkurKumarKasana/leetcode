class Solution {
public:
    vector<int> intersection(vector<int>& arr, vector<int>& brr) {
        set <int> result;
        for(int i=0;i<arr.size();i++){
            for(int j=0;j<brr.size();j++){
                if(arr[i]!=INT_MAX && arr[i]==brr[j]){
                    result.insert(arr[i]);
                    break;
                }
            }
        }
        return vector<int>(result.begin(),result.end());
    }
};