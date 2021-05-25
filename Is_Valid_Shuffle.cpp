#include <bits/stdc++.h>
using namespace std;
bool IsValidShuffle(string a, string b, string res)
{
    int la = 0;
    int lb = 0;
    int lr = 0;
    la = a.length();
    lb = b.length();
    lr = res.length();
    if ((la + lb) != lr)
    {
        return false;
    }
    else
    {
        int k = 0, i = 0, j = 0;
        while (k < lr)
        {
            //cout << "K :" << k << " Lr : " << lr << " ";
            if (i < la && res[k] == a[i])
            {
                // cout << res[i] << " ";
                i++;
            }
            else if (j < lb && res[k] == b[j])
            {
                //cout << res[i] << " ";
                j++;
            }
            else
            {
                //    cout << res[i] << " ";
                break;
            }

            k++;
        }
        if (i < la || j < lb)
        {
            return false;
        }
        else
        {
            return true;
        }
    }
}
int main()
{

    string a = "XY";
    string b = "12";
    string c = "X21Y";
    if (IsValidShuffle(a, b, c))
    {
        cout << "TRUE";
    }
    else
    {
        cout << "FALSE";
    }
}