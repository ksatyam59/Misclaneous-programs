#include<iostream>

using namespace std;

int main()
{
   int n, sum=0,mod;

   cout<<"enter no.";
   cin>>n;

   while(n!=0){
   mod=n%10;
   sum=sum+mod;

   n=n/10;

   }

   cout<<"sum="<<sum;

   return 0;


}
