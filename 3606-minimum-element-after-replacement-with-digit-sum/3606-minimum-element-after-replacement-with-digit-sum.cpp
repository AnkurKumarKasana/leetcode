class Solution {
public:
    int getSum(int n) 
    {
        int sum = 0;
        while (n > 0)
        {
            sum += (n % 10);
            n /= 10;
        }

        return sum;
    }
    int minElement(vector<int>& nums) {
        
        int minSum = INT_MAX;
        for (auto num : nums)
        {
            minSum = min(minSum, getSum(num));
        }

        return minSum;
    }
};