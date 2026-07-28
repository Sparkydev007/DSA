class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();  //intiaize the the n as size of nums
        k = k%n; // formula to rotate only needed part not whole array 

        reverse(nums.begin(),nums.begin()+(n-k)); //cpp reverse funtion initialse from start to full array including (n-k)  
        reverse(nums.begin()+(n-k),nums.end()); // again reverse array but this time k steps stays difrrenrt
        reverse(nums.begin(),nums.end()); //reverse all array 

    }
};