class Solution {
public:
    int characterReplacement(string s, int k) {
        vector<int> freq(26,0);
        int maxlen=0,l=0,mxfreq=0;
        for(int r=0;r<s.size();r++){
            freq[s[r]-'A']++;
            mxfreq=max(mxfreq,freq[s[r]-'A']);

            if(r-l+1 -mxfreq>k){
                freq[s[l]-'A']--;
                l++;
            }
            maxlen=max(maxlen,r-l+1);
        }return maxlen;
    }
};