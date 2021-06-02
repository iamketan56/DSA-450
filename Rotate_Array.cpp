#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int factor;
    cout << "Enter the factor to rotate" << endl;
    cin >> factor;
    int n = sizeof(a) / sizeof(int);
    reverse(a, a + n);

    reverse(a, a + factor);

    reverse(a + factor, a + n);
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}