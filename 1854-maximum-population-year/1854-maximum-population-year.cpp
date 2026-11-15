class Solution {
public:
    int maximumPopulation(vector<vector<int>>& logs) {
        int years[101]={0};
        for(auto &log:logs){
            years[log[0]-1950]++;
            years[log[1]-1950]--;
        }
        int maxPop = 0;
        int ans = 1950;
        int curr = 0;
        for (int i=0;i<101;i++){
            curr += years[i];
            if (curr>maxPop) {
                maxPop = curr;
                ans = 1950 + i;
            }
        }
        return ans;
    }
};
