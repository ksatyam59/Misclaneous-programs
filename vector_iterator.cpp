#include<iostream>
#include<vector>


using namespace std;

int main()
{
    vector <int> v;
    vector <int>:: iterator it;

    for(int i=1;i<=5;i++)

        v.push_back(i);
  cout<<v.size()<<endl;
  cout<<v.capacity()<<endl;
  cout<<v.max_size()<<endl;
  cout<<v.at(3)<<endl;
  cout<<v.front()<<endl;
  cout<<v.back()<<endl;
  cout<<"Reference operator check"<<v[2]<<endl;
    for(it = v.begin(); it!=v.end();++it)
        cout<<*it<<" ";

        cout<<endl;

        v.pop_back();
        v.assign(4,1);
         for(it = v.begin(); it!=v.end();++it)
        cout<<*it<<" ";

    return 0;
}
