class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
         unordered_set<int> intSet; // C++ version of HashSet
        for (int num : nums) {
            if (intSet.find(num) != intSet.end()) {
                return true; // duplicate found
            }
            intSet.insert(num);
        }
        return false; // no duplicates
    }
};