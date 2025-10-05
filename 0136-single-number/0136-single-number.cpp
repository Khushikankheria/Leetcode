class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int singleN = 0;  
        
        for (int x : nums) {
            singleN ^= x; 
        }
        
        return singleN;  
    }
};