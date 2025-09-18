class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int local = 0, global = 0;
        
        for (int x : nums) {
            if (x == 1) {
                local++;
                global = max(global, local);
            } else {
                local = 0;
            }
        }
        
        return global;
    }
};