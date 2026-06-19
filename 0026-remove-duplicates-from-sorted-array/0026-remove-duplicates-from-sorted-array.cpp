class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.empty()) return 0;
        
        int i = 0; // Tracks the position of unique elements
        
        // Use a for loop to cleanly advance j from 1 to the end
        for (int j = 1; j < nums.size(); j++) {
            if (nums[i] != nums[j]) { 
                i++;               // Move unique tracker forward ONLY when a new element is found
                nums[i] = nums[j]; // Copy the unique element over
            }
        }
        
        // Since i is a 0-based index, the total number of unique elements is i + 1
        return i + 1; 
    }
};