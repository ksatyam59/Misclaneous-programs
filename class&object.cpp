//c++ program to create simple class and object

#include<iostream>


using namespace std;

class Mobile
{  public:

    int price ;
    char model[20];
    char colour[10];

  Mobile()
  {
      cout<<"enter price";
      cin>>price;
      cout<<"enter model";
      cin>>model;
      cout<<"enter colour";
      cin>>colour;
  }
    void Phone_price()
    {
       cout<<"price of the phone is"<<price;
       cout<<model;
       cout<<colour;
    }
};

int main()
{   Mobile m1;
    int c=25000;
   // cout<<"enter model name ";
   //cin.getline(m1.model,20);
   // m1.price=c;

    m1.Phone_price();
    return 0;
}

