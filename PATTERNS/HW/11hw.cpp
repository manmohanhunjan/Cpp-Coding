#include <iostream>
using namespace std;

int main(){

    int n;
    cin>>n;

    int row = 1;

    while (row<=n)
    {
        //Spaces
        int space = n - row;
        while(space)
        {
            cout<<" ";
            space -= 1;

        }
        //Numbers
        int num = 1;
        while (num<=row)
        {
            cout<<row;
            num += 1;
        }
        cout<<endl;
        row += 1;
    }
    
}