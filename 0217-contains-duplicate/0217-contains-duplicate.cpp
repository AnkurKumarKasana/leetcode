class Solution {
public:
    bool containsDuplicate(vector<int>& a) {
        if (a.empty()) return false;
        sort(a.begin(),a.end());
// pehle sort karo jisse ki adjacent element ko compare kar sake
        for(int j=1;j<a.size();j++){
// agar j or j-1 equal hai to array me duplicates elements hai to true return kardo 
            if(a[j]==a[j-1]){
                return true;
            }
        }//nahi to false return kardo 
        return false;

        
    }
};