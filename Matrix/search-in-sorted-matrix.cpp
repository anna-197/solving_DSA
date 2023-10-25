#include<bits/stdc++.h>
using namespace std;


class Solution { 
public: 
    bool searchMatrix(vector<vector<int>>& matrix, int target) { 

        //if 0 rows or 0 columns

        if (matrix.size() == 0 || matrix[0].size() == 0) 
    { 
        return false; 
    } 
    int low = 0; 
    int high =  matrix.size() - 1;

    // to determine the row, we'll have to search in first column

    //loop ends when low>high
    while (low <= high) 
    { 
        int middle = (low + high) / 2; 
        if (matrix[middle][0] < target) 
        { 
            low = middle + 1; 
        } 
        else if (matrix[middle][0] > target) 
        { 
            high = middle - 1; 
        } 
    } 

    //row determined hence, now check that row to determine column
    // when above loop ends, search in row[high] 
    int row = high; 
    low = 0;
    high = matrix[row].size()-1;

    if (row >= 0) 
    { 
        while (low <= high) 
        { 
            int middle = (low + high) / 2; 
            if (matrix[row][middle] < target) 
            { 
                low = middle + 1; 
            } 
            else if (matrix[row][middle] > target) 
            { 
                high = middle - 1; 
            } 
            else 
            { 
                return true; 
            } 
        } 
    }  
    return false; 
    } 
};