#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cin>>n;
  int t;
  cin>>t;
  for(int i=0; i<n; i++)
  {
    int k;
    cin>>k;
    if(k>=t)
    {
      cout<<"YES"<<endl;
    }
    else
    {
      cout<<"NO"<<endl;
    }
  }
}
