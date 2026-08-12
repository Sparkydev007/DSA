class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> num_to_index;
        
        for (int i = 0; i < nums.size(); i++) {
            int complement = target - nums[i];
            
            // Check if the required complement already exists in the map
            if (num_to_index.count(complement)) {
                return {num_to_index[complement], i};
            }
            
            // Store the index of the current number
            num_to_index[nums[i]] = i;
        }
        
        return {}; // Return empty vector if no solution is found
    }
};