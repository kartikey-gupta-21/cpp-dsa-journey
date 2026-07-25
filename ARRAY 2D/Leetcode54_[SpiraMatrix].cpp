#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> ans;

        int rowsize=matrix.size();
        int colsize=matrix[0].size();
        
        int startrow=0;
        int startcol=0;
        int endrow=rowsize-1;
        int endcol=colsize-1;
        int count=0,total=rowsize*colsize;

        while(count<total){
            //startingrow
            for(int i=startcol;count<total && i<=endcol;i++){
                ans.push_back(matrix[startrow][i]);
                count++;
            }
            startrow++;
            //startingcolumn
            for(int i=startrow;count<total && i<=endrow;i++){
                ans.push_back(matrix[i][endcol]);
                count++;
            }
            endcol--;
            //endingrow
            for(int i=endcol;count<total && i>=startcol;i--){
                ans.push_back(matrix[endrow][i]);
                count++;
            }
            endrow--;
            //endingcolumn
            for(int i=endrow;count<total && i>=startrow;i--){
                ans.push_back(matrix[i][startcol]);
                count++;
            }
            startcol++;
        }
        return ans;
        
    }
};

// Time Complexity: O(n*m) where n is the number of rows and m is the number of columns in the matrix.