
#include<iostream>

using namespace std;
int rev(int);

int main()
{
  int n,m;
  cout<<"enter no. to check palindrome or not=";
  cin>>n;
  m=rev(n);
  if(m==n)
    cout<<"no. is palindrome";
  else
    cout<<"no. is not palindrome";
  return 0;

}
int r, s=0;
int rev(int x)
{
    if(x!=0)
    {

    r=x%10;
    s=s*10+r;

    rev(x/10);
    }
    return s;
}
