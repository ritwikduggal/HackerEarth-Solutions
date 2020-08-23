#include<iostream>
#include<string.h>
#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin>>t;
  for(int i=0; i<t/2; i++)
  {
    int g, p;
    cin>>g>>p;
    int n;
    cin>>n;
    int a[n], b[n];
    int sum1=0, sum2=0;
    for(int j=0; j<n; j++)
    {
      cin>>a[j]>>b[j];
      sum1+=a[j];
      sum2+=b[j];
    }
    cout<<(g*sum1)+(p*sum2)<<endl;
    cin>>p>>g;
    cin>>n;
    sum1=0, sum2=0;
    for(int j=0; j<n; j++)
    {
      cin>>a[j]>>b[j];
      sum1+=a[j];
      sum2+=b[j];
    }
    cout<<(g*sum1)+(p*sum2)<<endl;
  }
}
