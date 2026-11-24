class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        if(nums.size()==1) return nums;
        vector<int> ans;
        for(int i=0;i<nums.size();i++){
            if(nums[i]%2==0) ans.insert(ans.begin(), nums[i]);
            else ans.push_back(nums[i]);
        }
        return ans;
    }
};