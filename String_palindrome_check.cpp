#include<iostream>


using namespace std;

int Palindrome(char *str)
{
    int n=0;
    for(int i=0;str[i]!='\0';i++)
    {
        n++;
    }
 // cout<<n;
    for(int j=0;str[j]!='\0';j++)
    {
        cout<<str[j]<<endl;
        cout<<str[n--]<<endl;
        if(str[j]!=str[n--])
        {
            return 0;
            break;
        }
    }

    return 1;
}

int main()
{
    char str[]="aabaa";
    int n=sizeof(str)/sizeof(str[0]);
    int x=Palindrome(str);
    if(x==1)
    {
        cout<<"Palindrome";
    }
    else cout<<"Not Palindrome";
    return 0;
}
