#include<iostream>
#define N 8
using namespace std;


void sel_sort(int a[N])
{
    int temp=0;

    for(int i=0;i<N;i++)
    { //int min=i;
      for(int j=i+1;j<N;j++)



        if(a[j]<a[i])
        {//min=j;
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;

        }

        }



    return ;
}


int main()
{
    int arr[N];
    cout<<"Enter element in array";
    for(int i=0;i<N;i++)
        cin>>arr[i];
    sel_sort(arr);

    cout<<"\nsorted array is=";
    for(int i=0;i<N;i++)
        cout<<" "<<arr[i];
   return 0;
}
