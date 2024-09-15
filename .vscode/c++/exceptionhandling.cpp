//program1
#include<iostream>
using namespace std;

int main() 
{
    int x,y,z;
    cout<<"ENter two numbers"<<endl;
    cin>>x>>y;
    try {
        if(y==0)
        throw 1;
    z=x/y;
    cout<<z<<endl;
    }
     
     catch (int e)
     {
        cout<<"DIvision by zero"<<e<<endl;
     }
}