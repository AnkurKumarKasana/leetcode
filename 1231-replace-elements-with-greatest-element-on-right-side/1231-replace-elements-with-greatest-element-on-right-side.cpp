class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        vector<int> result;
        for(int i=0;i<arr.size();i++){
            int maxRight=-1;
            for(int j=i+1;j<arr.size();j++){
                maxRight=max(maxRight,arr[j]);
            }result.push_back(maxRight);
        }return result;

    }
};