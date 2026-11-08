class Solution {
public:
    int minMoves(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int moves=0,max=nums[nums.size()-1];
        for(int i=0;i<nums.size();i++){
            moves += (max-nums[i]);
        }
        return moves;
    }
};