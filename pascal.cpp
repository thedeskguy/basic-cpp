// 1
// 11
// 121
// 1331
// 14641
// 15101051
#include <iostream>
using namespace std;
int fact(int n)
{
    int f = 1;
    for (int i = 1; i <= n; i++)
    {
        f *= i;
    }
    return f;
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    // cout << "give me n";
    int n;
    cin >> n;
    int c;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            c = fact(i) / (fact(j) * fact(i - j));
            cout << c;
        }
        cout << endl;
    }
}