#include <bits/stdc++.h>
using namespace std;
bool find3Numbers(int arr[], int n, int X)
{
    sort(arr, arr + n);
    /*1 4 6 8 10 45 */
    int last, r;

    for (int j = 0; j < n - 2; j++)
    {
        last = j + 1;
        r = n - 1;
        while (last < r)
        {
            if (arr[j] + arr[last] + arr[r] == X)
            {
                return true;
            }
            else if (arr[j] + arr[last] + arr[r] < X)
            {
                j++;
            }
            else
            {
                r--;
            }
        }
    }
    return false;
    /*
    
    
    for (int i = 0; i < n - 2; i++)
    {
     unordered_set<int> s;
        int curr_sum = X - A[i];
        for (int j = i + 1; j < n; j++)
        {
            if (s.find(curr_sum - A[j]) != s.end())
            {
                printf("Triplet is %d, %d, %d", A[i],
                       A[j], curr_sum - A[j]);
                return true;
            }
            s.insert(A[j]);
        }
    }*/
}

int main()
{
    int n = 6;
    int X = 13;
    int arr[] = {1, 4, 45, 6, 10, 8};
    cout << find3Numbers(arr, n, X);
}