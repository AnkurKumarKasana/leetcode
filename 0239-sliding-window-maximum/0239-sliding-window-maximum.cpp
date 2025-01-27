class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& arr, int k) {
        multiset<int> s;
        for(int i=0;i<k;i++){
            s.insert(arr[i]);
        }
        vector<int> ans;
        for(int i=k;i<arr.size();i++){
            ans.push_back(*s.rbegin());
            s.erase(s.find(arr[i-k]));
            s.insert(arr[i]);
        }
        ans.push_back(*s.rbegin());
        return ans;
        
    }
};