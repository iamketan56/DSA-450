#include <iostream>
using namespace std;
int main()
{
    int a[] = {1, 2, 3, 4, 5, 6, 7};
    int i = 0;
    int j = (sizeof(a) / sizeof(int)) - 1;
    cout << "Before Reverse" << endl;
    for (int i = 0; i < sizeof(a) / sizeof(int); i++)
    {

        cout << a[i] << " ";
    }
    while (i < j)
    {
        int temp;
        temp = a[i];
        a[i] = a[j];
        a[j] = temp;

        i++;
        j--;
    }
    cout << "After Reverse" << endl;
    for (int i = 0; i < sizeof(a) / sizeof(int); i++)
    {
        cout << a[i] << " ";
    }
}