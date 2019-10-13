#include<iostream>


using namespace std;

void printa(char* str, int size)
{
   int i;
    for(i=0;i<size;i++)
    {

           if(str[i]=='d')

           {


            cout<<str[i];

           }
    }
}

int main()
{
    char str[]="aabbccd";

     int n= sizeof(str)/sizeof(str[0]);

      printa(str,n);

    return 0;
}

