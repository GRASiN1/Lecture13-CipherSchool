#include <iostream>
using namespace std;

int main()
{
    // int a=5;
    // int *x;
    // x=&a;
    // cout<<" "<<x<<" "<<x+1<<endl;
    // cout<<x+2<<endl;


    int a[5];
    int *x;
    x=&a[0];

    int i;
    for(i = 0; i<6; i++)
    {
        cout<<&a[i]<<endl;
    }

    return 0;
}