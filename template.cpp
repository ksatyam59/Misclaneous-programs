#include<iostream>

using namespace std;

template<class X>

X max( X a, X b)
{

 return a>b?a:b;
}

int main()
{
    cout<<max(10,20);

    return 0;
}
