class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int duplicate=-1,missing=-1;
        int n=nums.size();
        for(int i=1;i<n;i++){
            if(nums[i]==nums[i-1]) duplicate=nums[i];
        }
        int expected=1;
        for(int i=0;i<n;i++) {
            if(nums[i]==expected) expected++;
        }
        missing=expected;
        return {duplicate, missing};
    }
};