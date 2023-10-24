#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
         //given n x n matrix and NO NEED FOR ALLOCATION

         //therefore, first transpose of matrix

         int r = matrix.size();
         for(int i=0; i<r; i++){
             for(int j=0; j<i; j++){
                 swap(matrix[i][j], matrix[j][i]);
             }
         }

                 //clockwise is asked, therefore
         //after transpose, same row, columns change
         for(int i=0; i<r; i++){
             for(int j=0; j<r/2; j++){
                 swap(matrix[i][j], matrix[i][r-1-j]);
             }
         }

        
    }
};