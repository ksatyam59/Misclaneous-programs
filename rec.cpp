#include<iostream>

using namespace std;

int fact(int x)
{
    if(x==0)
    return 1;

 else
    return x*fact(x-1);
}

int main()
{  int n ,result;

   cout<<"enter positive integer";
   cin>>n;

   result=fact(n);
   cout<<"factorial="<<result;

   return 0;
}

