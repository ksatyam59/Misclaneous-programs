#include<iostream>

using namespace std;

int main()
{ int n;
     cout<<"enter value of n";
     cin>>n;
    int n1=0, n2=1, n3;
    if(n==1)
        cout<<n1;
    else if(n==2)
        cout<<n2;
    else
{


while(n-2!=0)
{
 n3=n1+n2;
 n1=n2;
 n2=n3;

 n--;
}
cout<<n3;
}
 return 0;
}

