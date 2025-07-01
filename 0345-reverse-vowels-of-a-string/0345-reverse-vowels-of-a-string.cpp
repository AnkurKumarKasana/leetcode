class Solution {
public:
    string reverseVowels(string s) {
        unordered_set<char> v = {'a', 'e', 'i', 'o', 'u','A', 'E', 'I', 'O', 'U'};
        int l =0;
        int r= s.size()-1;
        while(l<r){
            while(l<r && v.find(s[l])==v.end())l++;  
            while(l<r && v.find(s[r])==v.end())r--;;

            if(l<r){
                swap(s[l],s[r]);
                l++;r--;
            }
        }return s;

    }
};