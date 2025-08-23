class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
         int best = 0, cur = 0;
        for (int x : nums) {
            if (x == 1) { 
                cur++;
                if (cur > best) best = cur;
            } else {
                cur = 0;
            }
        }
        return best;
    }
};
