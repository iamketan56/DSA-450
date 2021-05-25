#include <bits/stdc++.h>
using namespace std;
string isSubset(int a1[], int a2[], int n, int m)
{
    unordered_set<int> us;
    for (int i = 0; i < n; i++)
    {
        us.insert(a1[i]);
    }
    for (int i = 0; i < m; i++)
    {
        if (us.count(a2[i]) == 0)
        {
            return "No";
        }
    }
    return "Yes";
}
int main()
{
    int a1[] = {1, 2, 3, 4, 5, 6};
    int a2[] = {1, 2, 4};
    int n = sizeof(a1) / sizeof(int);
    int m = sizeof(a2) / sizeof(int);
    cout << isSubset(a1, a2, n, m);
}