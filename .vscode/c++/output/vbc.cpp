#include<iostream>
using namespace std;

class student 
{
    protected:
    char name[30];
    int rollno;

    public:
    void get_roll()
    {
        cout<<"Enter name and roll no"<<endl;
        cin>>name>>rollno;
    }

    void show_roll()
    {
        cout<<"You entered"<<name<</n<<rollno;
    }

};

class Exam: virtual public student
{
    protected:
    int m1,m2;

    public:
    void get_mark()
    {
        cout<<"Enter marks"<<endl;
        cin>>m1>>m2;
            }

            void show_mark()
            {
                cout<<"You entered the marks"<<m1<<m2;
            }
};

class Sports: virtual public student
{
    protected:
    int score;

    public:

    void get_score()
    {
        cout<<"Enter the score"<<endl;
        cin>>score>>endl;

    }


    void show_score()
    {
        cout<<"You enetered the score"<<score<<endl;
    }

};

Class Result: public Exam, public Sports
{

public:
int total;

    

    void show_total()
    {
        total=m1+m2;
        cout<<"You achieved "<<total;
    }
};


main()
{
    Result r;
    r.get_roll;
    r.get_mark;
    r.get_score;
    r.show_roll;
    r.show_mark;
    r.show_total;

}