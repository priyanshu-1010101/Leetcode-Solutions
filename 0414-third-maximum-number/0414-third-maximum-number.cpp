class Solution {
public:
    int thirdMax(vector<int>& nums) {
        int max1 = 0, max2 = 0, max3 = 0;
        int count = 0;

        sort(nums.begin(), nums.end());

        for (int i = nums.size() - 1; i >= 0; i--) {
            if (count == 0) {
                max1 = nums[i];
                count++;
            }
            else if (nums[i] != max1 && count == 1) {
                max2 = nums[i];
                count++;
            }
            else if (nums[i] != max1 && nums[i] != max2 && count == 2) {
                max3 = nums[i];
                count++;
                return max3;
            }
        }

        return max1;
    }
};