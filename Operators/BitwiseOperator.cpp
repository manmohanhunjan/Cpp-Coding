#include <iostream>
using namespace std;

int main()
{
    int a = 4;
    int b = 6;

    cout << "a&b " << (a & b) << endl;
    cout << "a|b " << (a | b) << endl;
    cout << "~a " << ~a << endl;
    cout << "a^b " << (a ^ b) << endl;
}
/*OUTPUT
a&b 4
a|b 6
~a -5
a^b 2
*/