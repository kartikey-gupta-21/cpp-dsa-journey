class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int matrixrow=matrix.size();
        int matrixcolumn=matrix[0].size();
        for(int i=0;i<matrixrow;i++){
            for(int j=i;j<matrixcolumn;j++){
                swap(matrix[i][j],matrix[j][i]);
            }
        }
        for(int i=0;i<matrixrow;i++){
            for(int j=0;j<matrixcolumn/2;j++){
                swap(matrix[i][j],matrix[i][matrixrow-1-j]);
            }
        }
    }
};