class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> result;  
        result.push_back({}); 
        
        for (int i = 0; i < nums.size(); i++) {
            int currSize = result.size();
            for (int j = 0; j < currSize; j++) {
                vector<int> newSubset = result[j]; 
                newSubset.push_back(nums[i]);      
                result.push_back(newSubset);       
            }
        }
        
        return result;
    }
};
