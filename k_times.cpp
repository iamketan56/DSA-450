#include <bits/stdc++.h>
using namespace std;
vector<int> elementAppear(vector<int> v, int l)
{
    vector<int> res;
    unordered_map<int, int> m;
    unordered_map<char, int>::iterator it;
    for (int i = 0; i < v.size(); i++)
    {
        if (m.count(v[i]) > 0)
        {
            m[v[i]]++;
        }
        m.insert(make_pair(v[i], 1));
    }
    unordered_map<int, int>::iterator itr;
    for (itr = m.begin(); itr != m.end(); ++itr)
    {
        if (itr->second > (v.size() / l))
        {
            res.push_back(itr->first);
        }
    }
    return res;
}
int main()
{
    vector<int> v = {4, 5, 6, 7, 8, 4, 4};
    cout << "Test 1" << endl;
    vector<int> a = elementAppear(v, 3);
    for (int i = 0; i < a.size(); i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
    cout << "Test 2" << endl;
    v = {4, 2, 2, 7};
    vector<int> b = elementAppear(v, 3);
    for (int i = 0; i < b.size(); i++)
    {
        cout << b[i] << " ";
    }
    cout << endl;
    cout << "Test 3" << endl;
    v = {2, 7, 2};
    vector<int> c = elementAppear(v, 2);
    for (int i = 0; i < c.size(); i++)
    {
        cout << c[i] << " ";
    }
    cout << endl;
    cout << "Test 4" << endl;
    v = {2, 3, 3, 2};
    vector<int> d = elementAppear(v, 3);
    for (int i = 0; i < d.size(); i++)
    {
        cout << d[i] << " ";
    }
    cout << endl;
}