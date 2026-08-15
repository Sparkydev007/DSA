class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> v(numRows); // Declare a 2D vector of size numRows

        for (int i = 0; i < numRows; i++) {
            v[i].resize(i + 1);          // Resize row i to hold (i + 1) elements
            v[i][0] = v[i][i] = 1;       // First and last elements are always 1

            for (int j = 1; j < i; ++j) { // Fixed: ++j instead of ++i
                v[i][j] = v[i - 1][j] + v[i - 1][j - 1]; // Fixed: added 'v' before second term
            }
        }

        return v;
    }
};