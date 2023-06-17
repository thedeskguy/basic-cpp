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
        cout << "max is" << a;
    else if (b > a && b > c)
        cout << "max is" << b;
    else
        cout << "max is" << c;

    return 0;
}