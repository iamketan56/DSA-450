#include <bits/stdc++.h>
using namespace std;
int findLongestConseqSubseq(int arr[], int N)
{
    set<int> s;
    for (int i = 0; i < N; i++)
    {
        s.insert(arr[i]);
    }
    int longestsea = 0;
    for (int i = 0; i < N; i++)
    {
        if (!s.count(i - 1))
        {
            int currnum = i;
            int currseq = 1;
            while (s.count(currnum + 1))
            {
                currnum + 1;
                currseq += 1;
            }
            longestsea = max(longestsea, currseq);
        }
    }
    return longestsea;
}
int main()
{
    int a[] = {8, 8, 9, 9, 3, 4};
    int n = 6;
    cout << findLongestConseqSubseq(a, n);
}