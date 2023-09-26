#include <iostream>
using namespace std;

int main()
{
    int a;
    int b;
    cout << "Enter two numbers :" << endl;
    cin >> a >> b;
    int op;
    cout << "Enter the Operation :" << endl;
    cin >> op;
    int ans = 0;
    switch (op)
    {
    case 0:
        ans = a + b;
        cout << "add :" << ans << endl;
        break;
    case 1:
        ans = a - b;
        cout << "minus :" << ans << endl;
        break;
    case 2:
        ans = a * b;
        cout << "Multi :" << ans << endl;
        break;
    case 3:
        ans = a / b;
        cout << "div :" << ans << endl;
        break;

    default:
        cout << "Invalid Case" << endl;
        break;
    }
    return 0;
}