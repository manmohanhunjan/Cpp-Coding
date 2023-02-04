#include <iostream>
using namespace std;

int main(){

    int n;
    cin >> n;
    
    int row = 1;

    while (row<=n)
    {
        //Spaces

        int space = row-1;
        while (space)
        {
            cout<<" ";
            space -= 1;

        }
        //OR
        // int space = 1;
        // while (space<=row-1)
        // {
        //     cout<<" ";
        //     space += 1;

        // }
        

        //Stars
        int stars = n - row + 1;
        while (stars)
        {
            cout<<"*";
            stars -= 1;
        }
        /*OR
        int stars = 1;
        while (stars<=n - row + 1)
        {
            cout<<"*";
            stars += 1;
        }*/
        cout<<endl;
        row += 1;
        
        
    }
}
