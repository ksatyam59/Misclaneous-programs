#include<iostream>

using namespace std;
int fib(int);

int main()
{
   int n, r;
   cout<<"enter the value of n=";
   cin>>n;

   r=fib(n);
   cout<<"nth fibonacci no. is="<<r;
   return 0;
}

int fib(int x)
{
    if(x==1)
        return 0;
    else if (x==2)
        return 1;
    else
        return fib(x-1)+fib(x-2);
}
