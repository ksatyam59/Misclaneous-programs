#include<iostream>


using namespace std;

 void grid(char M[3][3])
{


    cout<<endl;
    cout<<endl;
    cout<<endl;


     for(int i=0;i<3;i++)
    {   cout<<"\t\t\t";
        for(int j=0;j<3;j++)
        {

          cout<<M[i][j]<<"\t\t";


        }

        cout<<endl;
        cout<<endl;
        cout<<endl;
    }

    cout<<"\t\t\t__|________|________|________|__"<<endl;
    cout<<"\t\t\t  |        |        |        |  "<<endl;
    cout<<"\t\t\t  |        |        |        |  "<<endl;
    cout<<"\t\t\t__|________|________|________|__"<<endl;
    cout<<"\t\t\t  |        |        |        |  "<<endl;
    cout<<"\t\t\t  |        |        |        |  "<<endl;
    cout<<"\t\t\t__|________|________|________|__"<<endl;
    cout<<"\t\t\t  |        |        |        |  "<<endl;
    cout<<"\t\t\t  |        |        |        |  "<<endl;
    cout<<"\t\t\t__|________|________|________|__"<<endl;
    cout<<"\t\t\t  |        |        |        |  "<<endl;


}
char matrix()
{
    char M[3][3];
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
            cin>>M[i][j];
    }

    return M;


}


int main()
{  char Mat[3][3];

    Mat=matrix();
    grid(Mat);
    return 0;
}
