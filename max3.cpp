#include <iostream>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int a, b, c;
    cin >> a >> b >> c;
    if (a > b && a > c)
        cout << "a";
    else if (b > a && b > c)
        cout << "b";
    else
        cout << "c";

    return 0;
}