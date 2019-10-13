
//frequency of a character

#include<iostream>
#include<stdio.h>

using namespace std;


int main()
{
    char str[20],ch;
    int count=0;
    cout<<"Enter a string=";
    gets(str);

    cout<<"\nEnter a character to check frequency ";
    cin>>ch;
    for(int i=0;str[i]!='\0';i++)
    {
        if(ch==str[i])
            count++;
    }
    cout<<str;

    cout<<"\nfrequency of"<<"  "<<ch<<" "<<"is "<<count<<" "<<"times";

    return 0;

}
