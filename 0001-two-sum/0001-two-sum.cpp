#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> num_map; // Stores number -> index
        
        for (int i = 0; i < nums.size(); ++i) {
            int complement = target - nums[i];
            
            // Check if complement is already in the map
            if (num_map.find(complement) != num_map.end()) {
                return {num_map[complement], i}; // Found the pair
            }

            // Store the current number and its index
            num_map[nums[i]] = i;
        }

        // This should not be reached as per the problem statement
        return {};
    }
};
