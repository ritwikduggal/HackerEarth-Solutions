#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin>>t;
  int T[t];
  for(int i=0; i<t; i++)
  {
    cin>>T[i];
  }
  for(int i=0; i<t; i++)
  {
    int s=0, e=2*T[i]-1;
    for(int j=0; j<T[i]; j++)
    {
      for(int k=0; k<2*T[i]; k++)
      {
        if(k<=s || k>=e)
        {
          cout<<"*";
        }
        else
        {
          cout<<"#";
        }
      }
      s++;
      e--;
      cout<<endl;
    }
    cout<<endl;
  }
}
