#include <iostream>
using namespace std;
enum person{stand=1,sit=4,walk=6,};//by default value of enum member start from 0,1,2;
int main()
{
    person p;
    p=sit;
    cout<<p;
    return 0;
}
