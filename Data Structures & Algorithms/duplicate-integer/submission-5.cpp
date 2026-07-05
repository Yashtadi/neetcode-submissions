class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        // Hash set approach , i couldn't think of this
        unordered_set<int> seen;
        for (int num : nums) {
            if (seen.count(num)) {
                return true;
            }
            seen.insert(num);
        }
        return false;
    }
};