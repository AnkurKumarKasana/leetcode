class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        unordered_map<int,int> basket;
        int left=0,maxlen=0;
        for(int right=0;right<fruits.size();right++){
            basket[fruits[right]]++;
            while(basket.size()>2){
                basket[fruits[left]]--;
                if(basket[fruits[left]]==0){
                    basket.erase(fruits[left]);
                   
                } left++;
            }
            maxlen=max(maxlen,right-left+1);
        }return maxlen;

    }
};

/* pehle ek hashmap me store karte raho ki konsa element kitni baar aa rha hai , or left right pointer se ek window maintain karte chalo ,  fir condition lga do ki agar hashMap ka size 2 se bada hai to window shrink karni hogi left se , while(size>2) wali line me , fir jo left wla element hai , uska count kam krte raho jab tak 0 na hojaye , jab 0 hojaye fir if loop lagake , check krlo if fruits[left]==0, to left wale element ko hashmap se erase krdo , or if loop se bhaar aake left ko lef++ krdo , fir maxlen calculate krlo loop se bhaar aake ,,,,, maxlen= max(maxlen, right-left+1); thats it */

