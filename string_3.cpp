
// to print only alphabets removing all other character



#include<iostream>
#include<stdio.h>

using namespace std;


void remove(char *c)
{ char ch[100];
int count=0;

    for(int i=0;c[i]!='\0';i++)
    {
        if(c[i]>='a'&&c[i]<='z'||c[i]>='A'&&c[i]<='Z')
        {
            ch[count++]=c[i];

        }
    }
    ch[count]='\0';

    cout<<"\nstring after removal="<<ch;
}

int main()
{
    char str[100];
    cout<<"Enter string in array";
    gets(str);

    remove(str);

    return 0;
}
