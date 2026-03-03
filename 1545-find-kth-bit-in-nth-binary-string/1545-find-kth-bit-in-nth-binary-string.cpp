class Solution {
public:
    char findKthBit(int n, int k) {
        if (n == 1) return '0';  // Base case: S1 = "0"
        
        int mid = (1 << (n - 1)); // Middle index of Sn (1-based)
        
        if (k == mid) return '1';          // Middle bit is always '1'
        else if (k < mid) return findKthBit(n - 1, k); // Left half
        else {
            // Right half: mirrored and inverted
            char bit = findKthBit(n - 1, (1 << n) - 1 - k + 1);
            return bit == '0' ? '1' : '0';
        }
    }
};