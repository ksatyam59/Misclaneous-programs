#include<iostream>

using namespace std;


class SI
{
public:
    int A;
    int R;
    int T;

    void getA(float x);
    void getR(float y);
    void getT(float z);

    float S();
};


void SI::getA(float x)
{
    A=x;
}

void SI::getR(float y)
{
    A=y;
}

void SI::getT(float z)
{
    A=z;
}

float SI:: S()
{
  return (A*R*T)/100;
}


int main()
{
    SI s1;
    float x=5000;
    float y=10;
    float z=3;

    s1.getA(x);
    s1.getR(y);
    s1.getT(z);

    float result=s1.S();

    cout<<"simple interest="<<result;

    return 0;

}
