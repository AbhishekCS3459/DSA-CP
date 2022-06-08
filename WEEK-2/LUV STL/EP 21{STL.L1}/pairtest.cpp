#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    pair<int, string> p;
    // p.first=34;
    // p.second="abhi";
    // cout<<p.first<<p.second<<endl;
    // METHOD 2
    p = make_pair(2, "af");

    // COPying pair without reference
    pair<int, string> p1 = p;
    p1.first = 9;
    cout << p.first << p.second << endl;
    pair<int, string> &p2 = p;
    p.first = 8;
    cout << p.first << p.second << endl;

    int a[] = {1, 2, 3};
    int b[] = {4, 5, 6};
    pair<int, int> p_array[3]; //  DECLARATION OF THE ARRAY USING PAIR
    p_array[0] = {1, 4};
    p_array[1] = {2, 5};
    p_array[2] = {3, 6};
    for (int i = 0; i < 3; i++)
    {
        cin >> p_array[i].first >> p_array[i].second;
    }

    for (int i = 0; i < 3; i++)
    {
        cout << p_array[i].first << p_array[i].second << endl;
    }

    return 0;
}
