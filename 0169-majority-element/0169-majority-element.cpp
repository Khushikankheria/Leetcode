class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count = 0;
        int candidate = 0;

        for (int x : nums) {
            if(count == 0){
                candidate = x;
            }
            if (x == candidate){
                count++;
            }
            if (x != candidate){
                count--;
            }
        }

        return candidate;
        
    }
};