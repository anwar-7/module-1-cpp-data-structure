#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    char a[100];
    // cin >> a;
    cin.getline(a, 100);

    cout << strlen(a) << endl;
    cout << a;
    return 0;
}