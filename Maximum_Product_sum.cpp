#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a[100];
    int n;
    long long maxsum = 1;
    long long currsum = 1;
    cout << "Enter the number to store :" << endl;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int i = 0;
    int j = 0;
    while (i < n && j < n)
    {
        currsum *= a[j];
        if (currsum == 0)
        {
            i = j + 1;
            cout << "i:" << i << " ";
            j = i;
            cout << "j:" << j << " ";
            currsum = 1;
        }
        else if (currsum < 0)
        {
            i++;
            j = i;
        }
        else
        {
            cout << currsum << " ";
            maxsum = max(maxsum, currsum);
            j++;
        }
    }
    cout << endl;
    cout << "Maximum Product sum is : " << maxsum;
}