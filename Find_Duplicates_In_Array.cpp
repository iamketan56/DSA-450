#include <iostream>
#include <algorithm>
#include <map>
using namespace std;
int main()
{
    int a[] = {1, 2, 3, 1, 4, 5, 6, 2, 4, 3};
    map<int, bool> m;
    cout << "Duplicate Element ";
    for (int i = 0; i < 10; i++)
    {
        if (m[a[i]])
        {
            cout << a[i] << " ";
        }
        m[a[i]] = true;
    }
}