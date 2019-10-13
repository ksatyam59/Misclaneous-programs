#include<iostream>


using namespace std;


int bubble(int arr[], int n)
{
   int temp, flag;

    for(int i=1;i<n-1;i++)
    {     flag=0;
        for(int j=0;j<n-i-1;j++)

            if(arr[j]>arr[j+1])
        {
          temp=arr[j];
          arr[j]=arr[j+1];
          arr[j+1]=temp;
          flag=1;
        }

        if(flag==0)
    cout<<"array is already sorted\n";
            break;
    }


 for(int i=0;i<n;i++)
       cout<<arr[i];

}


int main()
{
    int m=6, arr[100];


    cout<<" enter the unsorted array";
      for(int i=0;i<m;i++)
      {
        cin>>arr[i];
      }


      bubble(arr,m);

      return 0;
}

