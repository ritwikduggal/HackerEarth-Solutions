#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cin>>n;
  int N=n;
  int a[N];
  for(int i=0; i<N; i++)
  {
    cin>>a[i];
  }
  int b[N];
  int ans;
  for(int i=0; i<N/2; i++)
  {
    b[i]=a[i];
    while(b[i]>=10)
    {
      b[i]/=10;
    }
    ans+=(b[i])*pow(10, n);
    n--;
  }
  for(int i=N/2; i<N; i++)
  {
    b[i]=(a[i]%10);
    ans+=(b[i])*pow(10, n);
    n--;
  }
  if(ans%11==0)
  {
    cout<<"OUI"<<endl;
  }
  else
  {
    cout<<"NON"<<endl;
  }
}
