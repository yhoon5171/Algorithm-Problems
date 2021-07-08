//https://leetcode.com/problems/pascals-triangle/
//평가: 1

class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> pascal(numRows, vector<int> (numRows, -1));

        for (int i = 0; i < numRows; i++){
            pascal[i].resize(i + 1);
            pascal[i][0] = 1;
            pascal[i][i] = 1;
        }

        for (int i = 0; i < numRows; i++){
            for (int j = 0; j < i + 1; j++)
                if (pascal[i][j] == -1)
                    pascal[i][j] = pascal[i - 1][j - 1] + pascal[i - 1][j];
        }
        return pascal;
    }
};
