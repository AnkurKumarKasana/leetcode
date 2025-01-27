class Solution {
public:
    vector<int> intersection(vector<int>& arr, vector<int>& brr) {
            set<int> ans;

        for(int i=0;i<arr.size();i++){
            for(int j=0;j<brr.size();j++){
                if(arr[i]!=INT_MAX && arr[i]==brr[j]){
                    ans.insert(arr[i]);
                    arr[i]=INT_MAX;
                    break;
                }
            }
        }
        return vector<int>(ans.begin(), ans.end()); 
    }
};