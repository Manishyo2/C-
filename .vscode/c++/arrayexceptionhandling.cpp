#include<iostream>
using namespace std;

main() 
{ 
    int id, num[5]={10,20,30,40,50};
    cout<<"Enter the array index to display the data";
    cin>>id;

    try {
        if( id>4)
        throw "Array index out of range";

        else 
        cout<<num[id];
    }

    catch(const char* ex)
    {
        cout<<ex;
    }
}