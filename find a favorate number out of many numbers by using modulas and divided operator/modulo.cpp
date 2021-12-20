#include <iostream>
using namespace std;

int main()
{
    int t;
    int num,count=0,rem;
    cout<<"Enter test case : ";
    cin>>t;
    while(t--)
    {
        int num,count=0,rem;
        cout<<"Enter decimal number : ";
        cin>>num;
        while(num!=0)
        {
        rem=num%10;

        if(rem==5)
        {
            count++;
        }
        num=num/10;
        }
        cout<<count<<"\n";

    }
    return 0;
}
