#include <bits/stdc++.h>
using namespace std;
bool reverseString(vector<char> &s)
{
    int i = 0;
    int j = s.size() - 1;
    while (i < j)
    {
        if (s[i] != s[j])
        {
            return false;
        }
        i++;
        j--;
    }
    return true;
}
int main()
{
    vector<char> s = {'a', 'b', 'c'};
    if (reverseString(s))
    {
        cout << "Yes Palindorm";
    }
    else
    {
        cout << "Not Palindorm";
    }
}