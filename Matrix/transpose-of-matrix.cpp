#include<bits/stdc++.h>
using namespace std;

class Solution { 
public: 
    vector<vector<int>> transpose(vector<vector<int>>& matrix) { 
        int row = matrix.size(); 
        int col = matrix[0].size(); 
         vector<vector<int>> B(col, vector<int>(row, 0)); 
          for(int i =0; i<col; i++){ 
              for(int j=0; j<row; j++){ 
                  B[i][j] = matrix[j][i]; 
              } 
          } 
          return B; 
    } 
};

/*
IF ALLOCATION OF MATRIX IS NOT ALLOWED

int row = matrix.size();
for(int i=0; i<r; i++){
    for(int j=0; j<i; j++){
        swap(matrix[i][j], matrix[j][i]);
    }
}
*/