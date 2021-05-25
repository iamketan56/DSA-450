#include <bits/stdc++.h>
using namespace std;
#define N 5
void findMaxValue(int mat[][N])
{
    vector<int> v;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            v.push_back(mat[i][j]);
        }
    }
    int maxElementIndex = max_element(v.begin(), v.end()) - v.begin();
    v.clear();
    int largeElementRow = maxElementIndex / N;
    int largeElementCol = maxElementIndex % N;
    int maxelement = mat[largeElementRow][largeElementCol];

    vector<int> v1;
    for (int i = 0; i < largeElementRow; i++)
    {
        for (int j = 0; j < largeElementCol; j++)
        {
            v1.push_back(mat[i][j]);
        }
    }
    int minElement = *min_element(v1.begin(), v1.end());
    cout << "Maximum Difference " << maxelement - minElement;
}
int main()
{
    int mat[5][5] = {{1, 2, -1, -4, -20},
                     {-8, -3, 4, 2, 1},
                     {3, 8, 6, 1, 3},
                     {-4, -1, 1, 7, -6},
                     {0, -4, 10, -5, 1}};
    findMaxValue(mat);
}