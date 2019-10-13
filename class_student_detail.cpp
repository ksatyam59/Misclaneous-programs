#include<iostream>

using namespace std;


class student
{  public:
    char name[15];
    int roll;
    float marks;
    char Branch[20];

    void getData();
    void putData();
};

void student::getData()
{
    cout<<"Enter name,roll no,marks and Branch of a the student";
    cin>>name;
    cin>>roll;
    cin>>marks;
    cin>>Branch;
}

void student::putData()
{
    cout<<name<<endl;
    cout<<roll<<endl;
    cout<<marks<<endl;
    cout<<Branch;

}

int main()
{
    student s1,s2;
    s1.getData();
    s1.putData();

    s2.getData();
    s2.putData();


    return 0;
}
