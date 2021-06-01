#include <bits/stdc++.h>
using namespace std;
int sumCOL(int *a,int colnum, int m)
{
    int sum = 0;
    for (int i = 0; i < m; i++)
    {
        sum += a[colnum][i];
    }
    return sum;
}
int sumROW(int *a, int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += a[i];
    }
    return sum;
}
int maxArea(int M[1000][1000], int n, int m)
{
    int sums = 0;
    for (int i = 0; i < n; i++)
    {
        sums = sumROW(M[i], m);
    }
}
int main()
{
}