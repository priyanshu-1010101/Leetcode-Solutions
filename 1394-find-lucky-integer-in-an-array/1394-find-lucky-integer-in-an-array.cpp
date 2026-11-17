
class Solution {
public:
    int findLucky(vector<int>& arr) {
        int n=arr.size();
        vector<int>ans(n+1,0);
        for(int i=0;i<n;i++){
            if(arr[i] <= n) ans[arr[i]]++;
        }
        for(int i=n;i>=1;i--){
            if(ans[i]==i) return i;
        }
        return -1;
    }
};
