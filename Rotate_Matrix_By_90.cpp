#include <bits/stdc++.h>
using namespace std;
void Transpose(int a[][3], int R, int C)
{
    int temp;
    for (int i = 0; i < R; i++)
    {
        for (int j = i; j < C; j++)
        {
            if (i != j)
            {
                temp = a[i][j];
                a[i][j] = a[j][i];
                a[j][i] = temp;
            }
        }
    }
}
void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
void reverse(int a[][3], int R, int C)
{
    for (int i = 0; i < R; i++)
    {
        int start = 0;
        int end = C - 1;
        while (start < end)
        {
            swap(&a[i][start], &a[i][end]);
            start++;
            end--;
        }
    }
}
int main()
{
    int a[3][3] = {{1, 2, 3},
                   {4, 5, 6},
                   {7, 8, 9}};

    Transpose(a, 3, 3);
    reverse(a, 3, 3);
}
