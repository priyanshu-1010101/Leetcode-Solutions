class Solution {
public:
    int minMoves2(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int low=0,high=nums.size()-1;
        int mid;
        mid = (low+high)/2;
        int moves=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]<=nums[mid]) moves += nums[mid]-nums[i];
            else moves += nums[i]-nums[mid];
        }
        return moves;    
    }
};