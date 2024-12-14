#include<iostream>
using namespace std;


int evenodd( int a)
{
    if( a%2==0)
 {
    cout<<" The Number Is Even:";
 }
 else 
{
    cout<<" The Number IS Odd :";
}
    return a;
}
int main()
{
    int a;

    cout<< ( " Enter The Number :");
    cin>>a;

    int result = evenodd(a);
}