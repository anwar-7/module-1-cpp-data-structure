#include <iostream>
using namespace std;
int main()
{
    char a;
    cin >> a;
    switch (a)
    {
    case 'a':
        cout << "Vowel - " << a << endl;
        break;
    case 'e':
        cout << "Vowel - " << a << endl;
        break;
    case 'i':
        cout << "Vowel - " << a << endl;
        break;
    case 'o':
        cout << "Vowel - " << a << endl;
        break;
    case 'u':
        cout << "Vowel - " << a << endl;
        break;
    default:
        cout << "Consonant - " << a << endl;
    }
    return 0;
}