#include<iostream>

using namespace std;


int main()
{
  int n=7,c=1;

   for(int i=1;i<=n;i++)
   {
      for(int j=n-i;j>0;j--)
        cout<<" ";

      for(int k=0;k<i;k++)

        cout<<c++<<" ";


      cout<<endl;
   }



}
