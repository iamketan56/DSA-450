#include <iostream>
#include <algorithm>
#include <stdlib.h>
using namespace std;
//O(NlogN)
int main()
{
    int a[] = {7, 10, 4, 20, 15};
    int n = sizeof(a) / sizeof(int);
    int k;
    cout << "Enter the value of K to find the max and min" << endl;
    cin >> k;
    sort(a, a + n);
    cout << k << "th maximum element is : " << a[n - k] << " and " << k << " th minimum element is  :" << a[k - 1];
}