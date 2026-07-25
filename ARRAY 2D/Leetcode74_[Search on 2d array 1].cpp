#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row=matrix.size();
        int col=matrix[0].size();
        int start=0;
        int end=row*col-1;
        // we do this supposing that these elements are in a 1d array form
        int mid=start+(end-start)/2;          // imp for overflow condition
        while(start<=end){
            
            int elementmid=matrix[mid/col][mid%col];
            if(elementmid==target){
                return 1;
            }
            else if(elementmid<target){
                start=mid+1;
            }
            else{
                end=mid-1;
            }
            mid=start+(end-start)/2;
        }
        return 0;
    }
};
// time complexity is O(log(n*m)) where n is the number of rows and m is the number of columns in the matrix.