#include<iostream>


using namespace std;

int main()
{
    char str[100], c;
    int index;
    cout<<"enter a string";
    cin.getline(str,100);

    cout<<"enter character to find the last index"<<endl;
    cin>>c;

    for(int i=0;str[i]!='\0';i++)
    {
        if(str[i]==c)
            index=i;
    }

   cout<<index;
   return 0;
}
