class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        set <int> st;
        int i=0,j=0,ans=0;
        int n = s.size();
        while(i<n){
            if(!st.count(s[i])){
                st.insert(s[i]);
                ans=max(ans,(int) st.size());
                i++;
            }
            else{
                st.erase(s[j]);
                j++;
            }
        
        }return ans;
    }
};