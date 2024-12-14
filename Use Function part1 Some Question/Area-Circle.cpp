#include<iostream>
using namespace std;

float getradius(float num)
{
    num = 3.14*num*num;
    return num;
}

int main()
{
    float num;

    cout<<" Enter An Number :";
    cin>>num;

    float radius = getradius(num);

    cout<<"the radius of the circle " << num<< " is:" << radius << endl;
}