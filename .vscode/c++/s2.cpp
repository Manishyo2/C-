

#include <iostream>
using namespace std;

class Test {
    int a,b;
    public:
    void  getdata() 
    {
        cout<<"Enter two integers "<<endl;
        cin>>a>>b;
    }
    void operator--(int)
    {
        a--;
        b--;
    }
    void display()
    {
        cout<<"Value of a= "<<a<<endl;
        cout<<"Value of b= "<<b<<endl;
    }
    
    
};

 int main()
{
    Test ob;
    ob.getdata();
    cout<<"Before operator overloading"<<endl;
    ob.display();
    ob--;
    cout<<"After operator overlaoding"<<endl;
    ob.display();
}