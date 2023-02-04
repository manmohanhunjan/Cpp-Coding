/*OUTPUT: 4
****
***
**
*
*/
#include <iostream>
using namespace std;

int main(){

    int n;
    cin >> n;
    
    int row = 1;

    while (row<=n)
    {
        int stars = n - row + 1;
        while (stars)
        {
            cout<<"*";
            stars -= 1;
        }
        cout<<endl;
        row += 1;
        
    }
    
}
