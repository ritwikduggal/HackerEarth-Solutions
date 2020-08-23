#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n, sum=0;
  cin>>n;
  for(int i=1; i<n/2; i++)
  {
    sum+=i;
    if(sum>=n)
    {
      cout<<"Patlu"<<endl;
      break;
    }
    sum+=i*2;
    if(sum>=n)
    {
      cout<<"Motu"<<endl;
      break;
    }
  }
}
