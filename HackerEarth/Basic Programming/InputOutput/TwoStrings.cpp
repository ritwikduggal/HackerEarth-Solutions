#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin>>t;
  for(int i=0; i<t; i++)
  {
    char n1[100000], n2[100000];
    cin>>n1;
    cin>>n2;
    sort(n1, n1+strlen(n1));
    sort(n2, n2+strlen(n2));
    if(!strcmp(n1, n2))
    {
      cout<<"YES"<<endl;
    }
    else
    {
      cout<<"NO"<<endl;
    }
  }
}
