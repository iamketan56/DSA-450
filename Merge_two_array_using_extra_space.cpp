#include <bits/stdc++.h>
using namespace std;
void merge(int arr1[], int arr2[], int n, int m)
{
    int i = 0;
    int j = 0;
    while (i < n && j < m)
    {
        if (arr1[i] > arr2[j])
        {
            swap(arr1[i], arr2[j]);
            i++;
        }
        sort(arr2, arr2 + m);
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr1[i] << " ";
    }

    for (int i = 0; i < m; i++)
    {
        cout << arr2[i] << " ";
    }
}
int main()
{
    int a1[] = {10, 12};
    int a2[] = {5, 18, 20};
    merge(a1, a2, 2, 3);
}