#include<iostream>
#include<string.h>
#include<cstring>
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
  int a=0, b=7;
  for(int i=0; i<t; i++)
  {
    int dist1 = abs(a-T[i]);
    int dist2 = abs(b-T[i]);
    if(dist1<=dist2)
    {
      cout<<"A"<<endl;
      a=T[i];
    }
    if(dist2<dist1)
    {
      cout<<"B"<<endl;
      b=T[i];
    }
  }
}
