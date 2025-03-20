class Solution {
public:
    vector <int> getLeftMax(vector<int>& arr,int n){
        vector <int>LeftMax(n);
        LeftMax[0]=arr[0];

        for(int i=1;i<n;i++){
            LeftMax[i]=max(arr[i],LeftMax[i-1]);
        }
        return LeftMax;

    }

    vector <int> getRightMax(vector<int>& arr,int n){
        vector <int>RightMax(n);
        RightMax[n-1]=arr[n-1];

        for(int i=n-2;i>=0;i--){
            RightMax[i]=max(arr[i],RightMax[i+1]);
        }
        return RightMax;
    }

    int trap(vector<int>& arr) {
        int n= arr.size();
       
        vector <int>LeftMax= getLeftMax(arr,n);
        vector <int>RightMax= getRightMax(arr,n);
        int sum=0;
        for(int i=0;i<n;i++){
            int h=min(LeftMax[i],RightMax[i])- arr[i];
            sum+=h;
        }return sum;


        
    }
};