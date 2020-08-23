#include<iostream>
#include<string.h>
#include<bits/stdc++.h>
using namespace std;
int main()
{
  long int n;
  cin>>n;
  long int a[n];
  for(int i=0; i<n; i++)
  {
    cin>>a[i];
  }
  long int ans=1;
  for(int i=0; i<n; i++)
  {
    ans=(ans*a[i])%(1000000007);
  }
  cout<<ans;
}
