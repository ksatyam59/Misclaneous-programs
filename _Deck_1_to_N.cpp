#include<iostream>
#include<queue>


using namespace std;

int main()
{
    priority_queue<int,vector<int>,greater<int> >pq;

    int N;
    cin>>N;
    for(int i=1;i<N;i++)
    {
        pq.push(i);
    }

    while(pq.size()!=1)
    {
        pq.push(pq.top());

        pq.pop();
        pq.pop();
    }


    cout<<pq.top();

    return 0;
}
