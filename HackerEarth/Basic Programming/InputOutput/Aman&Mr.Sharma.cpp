#include<bits/stdc++.h>
using namespace std;
int main()
{
  long int t, t1=0;
  cin>>t;
  for(int i=0; i<t; i++)
  {
    long int r, h;
    cin>>r>>h;
    if(((2*r)*(3.142857))<=100*h)
    {
      t1++;
    }
  }
  cout<<t1;
}
