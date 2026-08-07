class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        std::unordered_set<int> set;
        
        for (int num : nums) {
            // If the number is already in our set, we found a duplicate
            if (set.contains(num)) {
                return true;
            }
            // Otherwise, add it to the set to keep track of it
            set.insert(num);
        }
        
        // If we check everything without returning true, all elements are distinct
        return false;
    }
};