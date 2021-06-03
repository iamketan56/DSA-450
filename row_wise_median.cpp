#include <bits/stdc++.h>
using namespace std;
int returnmedian(vector<vector<int>> &matrix, int r, int c)
{
  
    for (int i = matrix.size() - 1; i > 0; i--)
    {
        for (int j = 0; j < matrix[i].size(); j++)
        {

            matrix[0].push_back(matrix[i][j]);
        }
        matrix[i].clear();
    }
    sort(matrix[0].begin(), matrix[0].end());
    return matrix[0][matrix[0].size() / 2];
}
int main()
{
    vector<vector<int>> matrix = {{1}, {2}, {3}};

    cout << returnmedian(matrix, 3, 1);
}