class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        if(nums.size()==2) return nums;
        sort(nums.begin(),nums.end());
        vector<int> ans;
        for(int i=0;i<nums.size();i++){
            if(i==0 && nums[i]!=nums[i+1]) ans.push_back(nums[i]);
            else if(i==nums.size()-1 && nums[i]!=nums[i-1]) ans.push_back(nums[i]);
            else if(i>0 && i<nums.size()-1 &&nums[i]!=nums[i-1] && nums[i]!=nums[i+1]) {
                ans.push_back(nums[i]);
            }
            if(ans.size()==2) return ans;
        }
        return ans;
    }
};