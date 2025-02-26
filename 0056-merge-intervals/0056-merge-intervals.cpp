class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& arr) {
        sort(arr.begin(),arr.end());
        int j=0;
        for(int i=1;i<arr.size();i++){
            if(arr[j][1]>=arr[i][0]){//yaha overlap check horha hai 
                arr[j][1]=max(arr[j][1],arr[i][1]);
                //yaha (0,1) index change horha hai 
            }else{//agar (0,1)bada nahi hai (1,0) se to j ki value bdha do 
            //vo fir (1,1) ke liye check krega (2,1) se 
                j++;
                //j bdha do agli value k liye 
                arr[j]=arr[i];//
            }
        }arr.resize(j+1);
// yaha resize isliye hua hai kyuki arr me abhi bhi saari value stored hai 
// jab j saari value check krlega to vo n-2 index pe hoga 
//  ex- arr ka size 4 hai to merge karne ke baad j 2nd index tk aajayega n-2 index pe 
// isliye arr ko resize krdenge j+1 that is 2+1=3; to array me sirf sorted values store hongi at the end ;
        return arr;
    }
};