class Solution {
public:
    bool isNStraightHand(vector<int>& hand, int groupSize) {
        
        if (hand.size() % groupSize != 0)
            return false;
        
        map<int, int> count;
        
        // Count frequencies
        for (int card : hand) {
            count[card]++;
        }
        
        // Process cards in sorted order
        for (auto &it : count) {
            
            int start = it.first;
            int freq = it.second;
            
            if (freq > 0) {
                
                // Try forming group starting from 'start'
                for (int i = 0; i < groupSize; i++) {
                    
                    if (count[start + i] < freq)
                        return false;
                    
                    count[start + i] -= freq;
                }
            }
        }
        
        return true;
    }
};