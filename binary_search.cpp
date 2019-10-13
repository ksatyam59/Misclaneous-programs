//implementation of binary search using loops

#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
    int A[]={2,5,6,7,0,6,1,3,};
    int n=sizeof(A)/sizeof(A[0]);
    int data;
    cout<<"enter no. to be searched";
    cin>>data;

    // for binary search implementation array must be sorted

    sort(A,A+n);

    int low=0, high=n-1;
    int mid;
    // binary search part
    while(low<=high)
    {
        mid=(low+high)/2;

        if(A[mid]==data)
        {
            cout<<"data is found at "<<mid;
        }

        else if(data>A[mid])
        {
            low=mid+1;
        }

        else high=mid-1;

    }

    cout<<"data not found";

    return 0;
}
