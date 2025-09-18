class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int singleN = 0;  
        
        for (int num : nums) {
            singleN ^= num; 
        }
        
        return singleN;  
    }
};