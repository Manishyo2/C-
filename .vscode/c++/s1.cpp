#include<iostream>
using namespace std;

class Addition
{
    
    public:
    void sum(int a, int b)
    {
    cout<<a+b<<endl;

    }
    void sum(int a, int b, int c)
    {
    cout<<a+b+c<<endl;
    
    }

    
};

 main ()
{
    Addition ob;
    ob.sum(10, 20);
    ob.sum(10, 20, 30);


}
        
      

