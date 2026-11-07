class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int>ans;
        int st=0,end=numbers.size()-1;
        while(st<end){
            int currSum = numbers[st]+numbers[end];
            if(currSum==target){
                ans.push_back(st+1);
                ans.push_back(end+1);
                break;
            }
            else if(currSum>target) end--;
            else st++;

        }
        return ans;
    }
};