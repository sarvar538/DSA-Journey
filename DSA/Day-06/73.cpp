class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();
        vector<int>x , y;

        for ( int i = 0 ; i < n; i++ ) {
            for ( int j = 0; j < m; j++ ) {
                if ( matrix[i][j] == 0 ) {
                    x.push_back(i);
                    y.push_back(j);
                }
            }
        }
        for ( int i = 0 ; i < x.size(); i++ ) {
            int rowIdx = x[i];
            //here loop is for j (col)
            for ( int j = 0 ; j < m; j++ ) {
                matrix[rowIdx][j] = 0 ;
            }
        }
        for ( int j = 0; j < y.size(); j ++ ) {
            int colIdx = y[j];
            //loop for row 
            for ( int i = 0 ; i < n; i++ ) {
                matrix[i][colIdx] = 0 ;
            }
        } 
    }
};
