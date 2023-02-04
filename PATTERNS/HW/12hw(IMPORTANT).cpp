/*OUTPUT: 4
1234
 234
  34
   4*/
#include <iostream>
using namespace std;

int main()
{

    int n;
    cin >> n;

    int row = 1;
    while (row <= n)
    {
        // Spaces

        int space = 1;
        while (space <= row - 1)
        {
            cout << " ";
            space += 1;
        }

        // Numbers
        int col = 1;
        int number = row;

        while (col <= n - row + 1)

        {
            cout << number;
            col += 1;
            number += 1;
        }

        row += 1;
        cout << endl;
    }
}
