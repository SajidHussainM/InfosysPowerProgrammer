/*

In this problem we can consider that each cell can be replace by 3 elements one on the right same row , one bottom same column and one in the diagonal last,
so we compare this value with the other three and pick the max, we use the formula matrix.size()-j-1 to get the mirror values.

*/

#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);



/*
 * Complete the 'flippingMatrix' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts 2D_INTEGER_ARRAY matrix as parameter.
 */

int flippingMatrix(vector<vector<int>> matrix) {
    int n = matrix.size()/2;
    int sum = 0;
    
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            sum += max(matrix[i][j], max(matrix[i][matrix.size()-j-1], max(matrix[matrix.size()-i-1]
            [j], matrix[matrix.size()-i-1][matrix.size()-j-1])));
        }
    }
    
    return sum;
    
}

