#include<iostream>


using namespace std;


int fact(int n)
{
    if(n==0)
        return 1;

    else return(n*fact(n-1));

}

int main()
{
    int m=0;

    int total=fact(m);

    cout<<total;
    return 0;
}
