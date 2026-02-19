class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();
        int total = n * m ;
        int cnt = 0 ;

        int f_row = 0 ;
        int lastRow = n - 1 ;
        int f_col = 0;
        int lastCol = m - 1 ;
        vector<int>ans;
        while (cnt < total) {
            for (int i = f_col; i <= lastCol && cnt < total; i++) {
                ans.push_back(matrix[f_row][i]);
                cnt++;
            }
            f_row++;
            for (int i = f_row; i <= lastRow && cnt < total; i++) {
                ans.push_back(matrix[i][lastCol]);
                cnt++;
            }
            lastCol--;
            for (int i = lastCol; i >= f_col && cnt < total; i--) {
                ans.push_back(matrix[lastRow][i]);
                cnt++;
            }
            lastRow--;
            for (int i = lastRow; i >= f_row && cnt < total; i--) {
                ans.push_back(matrix[i][f_col]);
                cnt++;
            }
            f_col++;
        }
        return ans ;
    }
};
