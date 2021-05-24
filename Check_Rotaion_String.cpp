#include <bits/stdc++.h>
using namespace std;
bool IsRotation(string a, string b)
{
    if (a.length() != b.length())
    {
        return false;
    }
    string temp = a + b;
    return (temp.find(b) != string::npos);
}
int main()
{

    string a = "ABCD";
    string b = "CADB";
    if (IsRotation(a, b))
    {
        cout << "TRUE";
    }
    else
    {
        cout << "FALSE";
    }
}