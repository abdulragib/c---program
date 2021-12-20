#include <bits/stdc++.h>
using namespace std;

int main()
{
  //write your code here
  int t;
  cin>>t;
  while(t--)
  {
    int x;
    cin>>x;

   if(x%4==0)
    {
      if(x%100==0)
      {
        if(x%400==0)
        {
          cout<<"\n"<<"Yes";
        }
        else
        {
          cout<<"\n"<<"No";
        }
      }
      else
      {
        cout<<"\n"<<"Yes";
      }
    }

    else
    {
      cout<<"\n"<<"No";

    }
  }
  return 0;
}
