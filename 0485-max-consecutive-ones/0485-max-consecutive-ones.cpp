class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int local = 0, global = 0;  //local = 1 , global = total 1 ka count 

        for(int x : nums){
            if (x == 1){
                local++;
                global = max(global, local);
            }else{
                local = 0;
            }
        }
        return global;
        
    }
};