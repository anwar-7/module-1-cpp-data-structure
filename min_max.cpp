#include <iostream>
#include <algorithm>
using namespace std;
int my_min(int a, int b)
{
    if (a < b)
        return a;
    else
        return b;
}
int my_max(int a, int b)
{
    if (a > b)
        return a;
    else
        return b;
}

int main()
{
    int a, b;
    cin >> a >> b;
    int my_mi = my_min(a, b);
    int my_mx = my_max(a, b);
    int mi = min(a, b);
    int mx = max(a, b);
    cout << "With function " << my_mi << endl
         << "With function " << my_mx << endl;
    cout << mi << " " << mx << endl;
    return 0;
}