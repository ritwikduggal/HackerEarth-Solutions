#include<iostream>
#include<string.h>
#include<cstring>
#include<bits/stdc++.h>
using namespace std;
int main()
{
  int l, n, w, h;
  cin>>l>>n;
  for(int i=0; i<n; i++)
  {
    cin>>w>>h;
    if(w<l || h<l)
    {
      cout<<"UPLOAD ANOTHER"<<endl;
    }
    else if(w>=l && w==h)
    {
      cout<<"ACCEPTED"<<endl;
    }
    else if(w>=l && h>=l && w!=h)
    {
      cout<<"CROP IT"<<endl;
    }
  }
}
