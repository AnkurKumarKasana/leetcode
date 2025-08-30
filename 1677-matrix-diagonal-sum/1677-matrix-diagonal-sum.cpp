class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int sum=0;
        int s=0;
        int e=mat.size()-1;
        for(int i=0;i<mat.size();i++){
            if(s==e)sum-=mat[i][s];
            sum+=mat[i][s]+mat[i][e];
            s++;
            e--;
        }
        return sum;
    }
};