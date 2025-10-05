class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k = k % n;

        reverse( nums.begin(), nums.end());   // revrse entire array
        reverse (nums.begin(), nums.begin() + k);  //  reverse k given numbers in arr
        reverse (nums.begin() + k, nums.end());   // revrse end
        
    }
};