//voter 

#include<iostream>
using namespace std;
 int main()
{
    int age;
    cout<<"Enter your age"<<endl;
    cin>>age;

    try 
    {
        if(age>=18)
        
        cout<<"Acess granted";

        else 
        throw 505;

    }

    catch (int myNUm)
    {
        cout<<"Acess denied";
        cout<<"\nERROR NUMBER:"<<myNUm;
    }
}