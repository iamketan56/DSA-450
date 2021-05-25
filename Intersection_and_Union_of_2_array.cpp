#include <bits/stdc++.h>
using namespace std;
// vector<int> commonElements(int A[], int B[], int C[], int n1, int n2, int n3)
// {
//     vector<int> res;
//     //code here.
//     int count = 0;
//     set<int> s;
//     for (int i = 0; i < n1; i++)
//     {
//         s.insert(A[i]);
//     }
//     for (int i = 0; i < n2; i++)
//     {
//         s.insert(B[i]);
//     }
//     for (int i = 0; i < n3; i++)
//     {
//         if (s.count(C[i]) > 0)
//         {
//             if (binary_search(res.begin(), res.end(), C[i]))
//             {
//                 continue;
//             }
//             else
//             {
//                 res.push_back(B[i]);
//             }
//         }
//     }
//     return res;
// }

vector<int> commonElements(int A[], int B[], int C[], int n1, int n2, int n3)
{
    vector<int> res;

    int i = 0, j = 0, k = 0;

    while (i < n1 && j < n2 && k < n3)
    {

        if (A[i] == B[j] && B[j] == C[k])
        {
            res.push_back(A[i]);
            i++;
            j++;
            k++;
        }

        else if (A[i] < B[j])
            i++;

        else if (B[j] < C[k])
            j++;

        else
            k++;
    }
    set<int> s;
    unsigned size = res.size();
    for (unsigned i = 0; i < size; ++i)
        s.insert(res[i]);
    res.assign(s.begin(), s.end());
    return res;
}

int dounion(int a[], int n, int b[], int m)
{
    set<int> s;
    for (int i = 0; i < n; i++)
    {
        s.insert(a[i]);
    }
    for (int i = 0; i < m; i++)
    {
        s.insert(b[i]);
    }
    return s.size();
}
int main()
{
    int a[] = {3, 3, 3};
    int b[] = {3, 3, 3};
    int c[] = {3, 3, 3};
    int n = sizeof(a) / sizeof(a[0]);
    int m = sizeof(b) / sizeof(b[0]);
    int p = sizeof(c) / sizeof(c[0]);
    vector<int> res = commonElements(a, b, c, n, m, p);
    for (int i = 0; i < res.size(); i++)
    {
        cout << res[i] << " ";
    }
}