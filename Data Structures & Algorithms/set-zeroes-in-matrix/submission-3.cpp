class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();
        // unordered_set<int> zeroRows;
        // unordered_set<int> zeroCols;
        // for(int i = 0; i < rows; i++) {
        //     for(int j = 0; j < cols; j++) {
        //         if(matrix[i][j] == 0) {
        //             zeroRows.insert(i);
        //             zeroCols.insert(j);
        //         }
        //     }
        // }
        // for(int i = 0; i < rows; i++) {
        //     for(int j = 0; j < cols; j++) {
        //         if(zeroRows.count(i) || zeroCols.count(j)) {
        //             matrix[i][j] = 0;
        //         }
        //     }
        // }

        // use first row and col instead of external set 
        bool firstRowZero = false;
        bool firstColZero = false;
        for(int i = 0; i < m; i++) {
            if(matrix[i][0] == 0) {
                firstColZero = true;
                break;
            }
        }
        for(int j = 0; j < n; j++) {
            if(matrix[0][j] == 0) {
                firstRowZero = true;
                break;
            }
        }
        for(int i = 1; i < m; i++) {
            for(int j = 1; j < n; j++) {
                if(matrix[i][j] == 0) {
                    matrix[i][0] = 0;
                    matrix[0][j] = 0;
                }
            }
        }
        for(int i = 1; i < m; i++) {
            for(int j = 1; j < n; j++) {
                if(matrix[i][0] == 0 || matrix[0][j] == 0) {
                    matrix[i][j] = 0;
                }
            }
        }
        if(firstRowZero) {
            for(int j = 0; j < n; j++) {
                matrix[0][j] = 0;
            }
        }
        if(firstColZero) {
            for(int i = 0; i < m; i++) {
                matrix[i][0] = 0;
            }
        }
    }
};
