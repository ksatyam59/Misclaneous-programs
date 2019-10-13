#include<iostream>


using namespace std;


int sum(int n)
{
    while (n>0)
         return(n+sum(n-1));
}

int main()
{
    int m=4;

    int total= sum(m);
    cout<<total;

    return 0;
    }
