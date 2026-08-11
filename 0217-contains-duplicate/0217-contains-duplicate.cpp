class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        std :: unordered_set<int> aarya;


        for(int num : nums){
           if( aarya.contains(num)){
                return true;
            }

            aarya.insert(num);
        }

        return false;
    }
};