#include <bits/stdc++.h>
using namespace std;
vector<int> rodOffcut(vector<int> lengths)
{
    vector<int> res;
    int n = lengths.size();
    res.push_back(n);
    while (n >= 1)
    {
        int minimum_length = *min_element(lengths.begin(), lengths.end());

        for (int i = 0; i < n; i++)
        {
            lengths[i] = lengths[i] - minimum_length;
        }
        lengths.erase(std::remove(lengths.begin(), lengths.end(), 0), lengths.end());
        n = lengths.size();
        if (n >= 1)
        {
            res.push_back(n);
        }
    }
    return res;
}
int main()
{
    vector<int> l = {1, 1, 3, 4};
    vector<int> result = rodOffcut(l);

    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << endl;
    }
}