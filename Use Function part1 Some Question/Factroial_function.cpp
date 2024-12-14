#include<iostream>
using namespace std;


int factroial( int a)
{
    int fact = 1;
    for( int i=1; i<=a; i= i+1)
    {
        fact = fact *i;
    }
    return fact;

}

int main()
{
    int a;


    cout<<" Enter The Number :";
    cin>>a;

    int result = factroial(a);

    cout<<" The Factroial Of " <<a<< " is:" <<result<< endl; 
}