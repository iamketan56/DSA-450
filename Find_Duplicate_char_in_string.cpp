#include <bits/stdc++.h>
using namespace std;
void printduplicate(char s[])
{
    unordered_set<char> us;
    int length = strlen(s);
    for (int i = 0; i < length; i++)
    {
        if (us.count(s[i]) > 0)
        {
            cout << s[i] << " ";
        }
        else
        {
            
            us.insert(s[i]);
        }
    }
}
int main()
{
    char s[] = "test string";
    printduplicate(s);
}