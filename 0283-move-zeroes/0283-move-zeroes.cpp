class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int insertPosition = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != 0) {
                nums[insertPosition] = nums[i];
                insertPosition++;
            }
        }

        while (insertPosition < nums.size()) {
            nums[insertPosition++] = 0;
        }
    }
};



// here we have used the approch which involed the sorting the int array in zero & Non-zero while only taking the non zero elements into the initilized array and pushing all the zero arrays to the very end while keeping the complexity O(1)