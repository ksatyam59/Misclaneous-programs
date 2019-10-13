#include<iostream>

using namespace std;

int main()
{
    char str[50]="satyam kumar";
    int count=0,b=0,c=0;

    for(int i=0;str[i]!='\0';i++)
    {
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
        {
            count++;

        }
        else if(str[i]==0x20)
        {
            b++;
        }
        else c++;


    }

    cout<<"No. of vowels="<<count;
    cout<<"\nNo. of consonants="<<c;

    return 0;

}
