class Solution {
public:
    bool containsDuplicate(vector<int>& a) {
        if (a.empty()) return false;
        sort(a.begin(),a.end());

        for(int j=1;j<a.size();j++){
            if(a[j]==a[j-1]){
                return true;
            }
        }return false;

        
    }
};