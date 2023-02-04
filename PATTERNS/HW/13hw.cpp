#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int row = 1;
    while (row <= n)
    {
        // 1st triangle

        int num1 = 1;
        while (num1 <= n - row + 1)
        {
            cout << num1;
            num1 = num1 + 1;
        }

        // 2st triangle
        int star = row - 1;
        while (star)
        {
            cout << "**";
            star = star -1;
        }

        // 3st triangle

        int num2 = n-row+1;
        while (num2)
        {
            cout<<num2;
            num2 -=1;
        }
        
        cout << endl;
        row += 1;
    }
}