#include <bits/stdc++.h>
using namespace std;
int findDuplicate(vector<int> &nums)
{
    map<int, int> m;
    int i = 0;
    for (; i < nums.size(); i++)
    {

        if (m.count(nums[i]) > 0)
        {
            break;
        }
        else
        {
            m.insert(make_pair(nums[i], 1));
        }
    }
    return nums[i];
}
int main()
{
    vector<int> v = {1, 3, 4, 2, 2};
    cout << findDuplicate(v);
}
