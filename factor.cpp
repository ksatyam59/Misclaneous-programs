#include<iostream>

using namespace std;
int devide( int a, int b);


int main()
{
   int a , b,x;

   cout<<"enter two no."<<endl;
   cin>>a>>b;

   x=devide(a,b);

   cout<<x;

   return 0;
}


int devide( int a, int b)
{   int count=0;
    if(a<b)
       {
           for(int i=1;i<=a;i++)
              if(a%i==0 && b%i==0)
                {
                    count++;
                }
       }

       else
       {
           for(int i=0;i<=b;i++)
             if(a%i==0 && b%i==0)
             {
                 count++;
             }
       }

       return count;

}
