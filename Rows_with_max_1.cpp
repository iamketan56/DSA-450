#include <bits/stdc++.h>
using namespace std;
int rowWithMax1s(vector<vector<int>> arr, int n, int m)
{
    int sum = 0;
    int maxsum = 0;
    int maxsumrow = 0;
    for (int i = 0; i < n; i++)
    {
        sum = accumulate(arr[i].begin(), arr[i].end(), 0);
        if (sum > maxsum)
        {
            maxsum = sum;
            maxsumrow = i;
        }
    }
    if (maxsum == 0)
    {
        return -1;
    }
    return maxsumrow;
}
int main()
{
    vector<vector<int>> arr = {{0, 0, 0, 0}};
    cout << rowWithMax1s(arr, 4, 1);
}