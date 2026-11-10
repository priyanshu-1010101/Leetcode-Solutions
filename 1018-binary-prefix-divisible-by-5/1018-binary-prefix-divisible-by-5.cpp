
class Solution {
public:
    vector<bool> prefixesDivBy5(vector<int>& nums) {
        vector<bool> answer;
        int temp = 0;
        for(int i=0;i<nums.size();i++){
            temp=(temp*2 + nums[i])%5;
            if(temp==0) answer.push_back(true);
            else answer.push_back(false);
        }
        return answer;
    }
};
