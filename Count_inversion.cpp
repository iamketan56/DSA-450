#include <bits/stdc++.h>
using namespace std;
bool arraySortedOrNot(long long int arr[], long long int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            return false;
        }
    }
    return true;
}
long long int binarySearchCount(long long int arr[], long long int left, long long int right, int key)
{
    long long int count = 0;

    while (left <= right)
    {
        int mid = (right + left) / 2;
        if (mid == left)
        {
            count++;
        }
        if (arr[mid] < key)
        {
            count = count + 1;
            left = mid + 1;
            cout << "(" << key << "," << arr[mid] << ")";
        }
        else
            right = mid - 1;
    }
    cout << endl;

    return count;
}
long long int inversionCount(long long arr[], long long N)
{
    long long int c = 0;
    if (*max_element(arr, arr + N) == *min_element(arr, arr + N))
    {
        return 0;
    }
    else if (arraySortedOrNot(arr, N))
    {
        return 0;
    }
    else
    {
        for (long long int i = 0; i < N; i++)
        {
            long long int d = binarySearchCount(arr, i, N - 1, arr[i]);
            c = c + d;
        }
    }
    return c;
}
int main()
{
    long long int arr[] = {8, 4, 2, 1};
    cout << inversionCount(arr, 4);
}