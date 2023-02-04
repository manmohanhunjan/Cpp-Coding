/*OUTPUT: 4
1111
 222
  33
   4*/
#include <iostream>
using namespace std;

int main(){

    int n;
    cin >> n;
    
    int row = 1;

    while (row<=n)
    {
        //Spaces

        int space = 1;
        while (space<=row - 1)
        {
            cout<<" ";
            space += 1;
        }

        //Numbers

        int num = n - row + 1;
        while (num)
        {
            cout<<row;
            num -= 1;
        }
        row += 1;
        cout<<endl;
        
        
    }
    
}
