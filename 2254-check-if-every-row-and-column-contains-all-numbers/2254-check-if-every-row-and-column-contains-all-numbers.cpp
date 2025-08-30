class Solution {
public:
    bool checkValid(vector<vector<int>>& grid) {
        // validate rows
        int n=grid.size();
        for(int row=0;row<n;row++){
            unordered_set<int>st;
            for(int col=0;col<n;col++){
                if(st.find(grid[row][col])!=st.end()){
                    return false;
                }st.insert(grid[row][col]);
            }
        }

        for(int col=0;col<n;col++){
            unordered_set<int>st;
            for(int row=0;row<n;row++){
                if(st.find(grid[row][col])!=st.end()){
                    return false;
                }
                st.insert(grid[row][col]);

            }
        }return true;
    }
};