class Solution {
public:
    int countNumbersWithUniqueDigits(int n) {
        if(n==0)return 1;
        int count = 10; // Base case: For n = 1, there are 10 unique numbers (0-9)
        int product = 9; // First digit choices (1-9) for numbers with multiple digits
        int available= 9; // Remaining choices for the next digit
        for(int i=2;i<=n;i++){
            product*=available;
            available --;
            count +=product;
        }
        return count ;
        
    }
};