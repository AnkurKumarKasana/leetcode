class Solution {
public:
    int longestValidParentheses(string s) {
        stack<int> stk;
        int mx = 0;
        stk.push(-1);  // Initial base index

        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '(') {
                stk.push(i);
            } else {
                stk.pop();
                if (stk.empty()) {
                    stk.push(i);  // Update base
                } else {
                    mx = max(mx, i - stk.top());
                }
            }
        }
        return mx;
    }
};