#include<iostream>
#include<string.h>
#include<bits/stdc++.h>
using namespace std;
int main()
{
  int l, r, k;
  int ans=0;
  cin>>l>>r>>k;
  for(int i=l; i<r+1; i++)
  {
    if(i%k==0)
    {
      ans++;
    }
  }
  cout<<ans;
}
