#include <iostream>
using namespace std;

int main()
{

    int p;
    cout<<"Enter test case : ";
    cin>>p;
    while(p!=0)
    {
    int x,y,z;
    cout<<"\nEnter input two integer for addition : ";
    cin>>x>>y;
    z=x+y;
    cout<<"Output : ";
    cout<<z;
    p=p-1;
    }
    return 0;
}
