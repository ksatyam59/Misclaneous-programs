#include<iostream>


using namespace std;

int digit_sum(int n)
{
    int rem , sum=0;

    while(n!=0)
    {
        rem=n%10;
        sum=sum+rem;
        n=n/10;
    }

    cout<<sum<<endl;
    if((sum/10)>0)
    {
        digit_sum(sum);
    }

    return 0;
}

int main()
{
    int n=147;

    digit_sum(n);

    return 0;
}
