#include<iostream>
#include<vector>
#include<algorithm>


using namespace std;

int main()
{   char arr[]={'a','a','a','b','b','c'};
 int n = sizeof(arr)/sizeof(arr[0]);
 vector<char> A(arr, arr+n);

    vector<char>::iterator it;
    int x=count(A.begin(),A.end(),'a');
     int y=count(A.begin(),A.end(),'b');

 int z=count(A.begin(),A.end(),'c');



    for(int i=0;i<n;i++)
        cout<<A[i];
        cout<<endl;
        cout<<x;
        cout<<y;
        cout<<z;

    return 0;

}
