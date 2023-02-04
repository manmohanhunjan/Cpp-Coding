#include <iostream>
using namespace std;

int main(){
    // int a;
    // cin>>a;
    // cout<<"value of a is :"<< a <<endl;

    // //if a is posotive  
    // if (a>0){
    //     cout<<"A is Posotive" << endl;
    // }
    // else{
    //     cout<<"A is negative"<<endl;
    // }
//---------------------------------------------------------

    //taking two inputs

    // int a,b;
    // cout<<"Enter the value of a "<<endl;
    // cin>>a;
    // cout<<"Enter the value of b "<<endl;
    // cin>>b;

    // if(a>b){
    //     cout<<"A is greater "<< endl;
    // }
    // if(b>a){
    //     cout<<"B is greater "<< endl;
    // }
//---------------------------------------------------------

    //Else-if Statement

    // int a;
    // cout<<" enter the value of a "<<endl;
    // cin>>a;

    // if(a>0){
    //     cout<<" A is positive"<<endl;
    // }
    // else if(a<0){
    //     cout<<"A is negative"<<endl;
    // }
    // else{
    //     cout<<"A is 0"<<endl;
    // }
//---------------------------------------------------------

    //Q1
    // int a = 9;
    // if(a == 9){
    //     cout<<"NINEY";
    // }
    // if(a>0){
    //     cout<<"POSITIVE";
    // }
    // else{
    //     cout<<"NEGATIVE";
    // }
//---------------------------------------------------------

    // //Q2
    // int a = 2;
    // int b = a+1;

    // if((a=3)==b) {
    //     cout<<a;

    // }
    // else{
    //     cout<<a+1;
    // }
//---------------------------------------------------------

    // //Q3
    // int a = 24;
    
    // if(a>20){
    //     cout<<"LOVE";
    // }
    // else if(a==24){
    //     cout<<"Lovely";
    // }
    // else
    // {
    //     cout<<"Babbar";
    // }
    // cout<<a;

//---------------------------------------------------------
    //HomeWork
    //Input a value lowercase a to z
                  //uppercase A to Z
                  //numeric   0 to 9
    //Output should tell which type of value it is
    // int a;
    // cout<<"Enter a Lowercase/Uppercase/Numeric Value :"<<endl;
    // a = cin.get();

    // if(a>96 && a<123){
    //     cout<<"Lowercase"<<endl;
    // }
    // else if (a>64 && a<91){
    //     cout<<"Uppercase"<<endl;
    // }
    // else if(a>47 && a<58){
    //     cout<<"Numeric Value"<<endl;
    // }
    // else{
    //     cout<<"Enter the correct value"<<endl;
    // }
    
//------------------------------------------------------------
    //2nd Way of doing the HomeWork

    char c;
    cin>>c;

    if(c>='a' && c<='z'){
        cout<<"Lowercase"<<endl;
    }
    else if(c>='A' && c<='Z'){
        cout<<"Uppercase"<<endl;
    }
    else if(c>='0' && c<='9'){
        cout<<"Numeric"<<endl;
    }
    else{
        cout<<"Enter valid char/int";
    }
}
