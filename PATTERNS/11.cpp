/*OUTPUT:4
A
B C
C D E
D E F G*/

#include <iostream>
using namespace std;

int main(){

    int n;
    cin>>n;

    int row = 1;
    
    while (row<=n)
    {
        int col = 1;
        while (col<=row)
        {
         char ch = 'A'+col+row-2;
         cout<<ch<<" ";
         ch += 1;
         col += 1;   
        }
        cout<<endl;
        row += 1;
        
    }
    
}