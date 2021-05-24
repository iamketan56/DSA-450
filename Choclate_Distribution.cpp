#include <bits/stdc++.h>
using namespace std;
long long findMinDiff(vector<long long> a, long long n, long long m)
{
    sort(a.begin(), a.end());
    /*
    1,3,4,7,9,9,12,56
    */
    int mindiff = INT_MAX;
    int i = 0;
    int j = m - 1;
    while ((i <= n - m))
    {
        if ((a[j] - a[i]) < mindiff)
        {
            mindiff = a[j] - a[i];
            i++;
            j++;
        }
        else
        {
            i++;
            j++;
        }
    }
    return mindiff;
}
int main()
{
    long long N = 9;
    long long M = 9;
    vector<long long> A = {17, 83, 59, 25, 38, 63, 25, 1, 37};
    cout << findMinDiff(A, N, M);
}