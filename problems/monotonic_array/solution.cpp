class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        bool increasing = false;
        bool decreasing = false;

        for (int i = 1; i < nums.size(); ++i) {
            if (nums[i] > nums[i - 1]) {
                decreasing = true;
            } else if (nums[i] < nums[i - 1]) {
                increasing = true;
            }

            if (increasing && decreasing) {
                return false;
            }
        }
        return true;
    }
};