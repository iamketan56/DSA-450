#include <bits/stdc++.h>
#define N 5
using namespace std;
int countfun(int mid, int arr[N][N], int n)
{
    int row = 0;
    int col = n - 1;
    int count = 0;
    while (row < n && col >= 0)
    {
        if (arr[row][col] <= mid)
        {
            count += col + 1;
            row++;
        }
        else
        {
            col--;
        }
    }
    return count;
}
int kthsmallestelement(int arr[N][N], int n, int k)
{
    int mat_min = arr[0][0];
    int mat_max = arr[n - 1][n - 1];
    while (mat_max < mat_min)
    {
        int mid = (mat_max + mat_min) / 2;
        if (countfun(mid, arr, n) < k)
        {
            mat_min = mid + 1;
        }
        else
        {
            mat_max = mid;
        }
    }
    return mat_max;
}
int main()
{
    int n = 4;
    int k = 7;
    int mat[N][N] = {{10, 20, 30, 40}, {15, 25, 35, 45}, {24, 29, 37, 48}, {32, 33, 39, 50}};
    cout << kthsmallestelement(mat, n, k);
}
