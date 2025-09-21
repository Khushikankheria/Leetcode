class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int left = 0, right = (int)nums.size() - 1;

        while (left <= right) {
            int mid = left + ((right - left) >> 1);
            int midVal = nums[mid];

            if (midVal == target) return true;

            // If we can't tell which side is sorted because of duplicates
            if (nums[left] == midVal && nums[right] == midVal) {
                ++left;      // shrink both ends
                --right;
                continue;
            }

            // Left half is sorted
            if (nums[left] <= midVal) {
                if (target >= nums[left] && target < midVal)
                    right = mid - 1;
                else
                    left = mid + 1;
            }
            // Right half is sorted
            else {
                if (target > midVal && target <= nums[right])
                    left = mid + 1;
                else
                    right = mid - 1;
            }
        }
        return false;
    }
};