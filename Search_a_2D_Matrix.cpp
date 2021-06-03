#include <bits/stdc++.h>
using namespace std;

bool searchMatrix(vector<vector<int>> &matrix, int target)
{
    for (int i = 0; i < matrix.size(); i++)
    {
        vector<int> v = matrix[i];
        if (binary_search(v.begin(), v.end(), target))
        {
            return true;
        }
    }
    return false;
}
int main()
{
    vector<vector<int>> B = {{1, 3, 5, 7}, {10, 11, 16, 20}, {23, 30, 34, 60}};
    bool ans = searchMatrix(B, 13);
    if (ans)
    {
        cout << "true";
    }
    else
    {
        cout << "false";
    }
}