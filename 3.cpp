#include<iostream>

using namespace std;

int main()
{
string str;
cin>>str;
string k="";

int c=1;
for(int i=0;i<str.length()-1;i++)
    if(str[i]==str[i+1])
{
    c++;
}
else{
    k=k+str[i]+to_string(c);
c=1;
}

cout<<k;
return 0;
}
