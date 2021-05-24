#include <bits/stdc++.h>
using namespace std;
int getcount(int a[], int n, int key)
{
    int count = 0;
    unordered_map<int, int> m;
    for (int i = 0; i < n; i++)
    {
        int b = key - a[i];
        if (m[b] == 0)
        {
            m[a[i]]++;
        }
        else
        {
            count += m[b];
            m[a[i]]++;
        }
    }
    return count;
}
int main()
{
    int a[] = {1, 1, 1, 1};
    cout << getcount(a, 4, 2);
}