#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n = matrix.size();//rows
        int m = matrix[0].size(); //columns
        int col_index;
        int row_index;
        int mid;
        int start=0;
        int end = n*m-1;

        while(start<=end) {
            mid = start+(end-start)/2;
            col_index = mid%m;
            row_index = mid/m;
            if(matrix[row_index][col_index] == target){
                return 1;
            }
            else if(matrix[row_index][col_index] < target){
                start= mid+1;
            }
            else{
                end = mid-1;
            }
        }
        return 0;
    }
};