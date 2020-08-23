#include<bits/stdc++.h>
using namespace std;
int main()
{
  long int n;
  cin>>n;
  long int a[n], sum=0, b=-1, ans=0;
  for(int i=0; i<n; i++)
  {
    cin>>a[i];
    sum+=a[i];
  }
  for(int i=0; i<n; i++)
  {
    if((sum-a[i])%7==0)
    {
      if(b==-1)
      {
        b=a[i];
        ans=i;
      }
      else if(b>a[i])
      {
        b=a[i];
        ans = i;
      }
    }
  }
  if(b==-1)
  {
	  cout<<"-1"<<endl;
  }
  else
  {
    cout<<ans<<endl;
  }
}
