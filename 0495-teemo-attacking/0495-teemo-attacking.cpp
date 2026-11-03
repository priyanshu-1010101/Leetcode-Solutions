class Solution {
public:
    int findPoisonedDuration(vector<int>& timeSeries, int duration) {
        int sec=0;
        for(int i=1;i<timeSeries.size();i++){
            if(timeSeries[i]-timeSeries[i-1]>=duration) sec +=duration;
            else sec += timeSeries[i]-timeSeries[i-1];
        }
        return sec+duration;
    }
};