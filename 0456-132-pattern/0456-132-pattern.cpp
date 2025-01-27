class Solution {
public:
    bool find132pattern(vector<int>& a) {
        int n=a.size();
        int num3=INT_MIN;
        stack <int> st;
        for(int i=n-1;i>=0;i--){
            if(a[i]<num3){
                return true ;
            }
            while(!st.empty() && st.top() < a[i]){
                num3=st.top();
                st.pop();
            }
            st.push(a[i]);
        
    }return false;
    }  
};