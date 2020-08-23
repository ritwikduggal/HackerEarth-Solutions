#include<iostream>
#include<string.h>
#include<cstring>
#include<bits/stdc++.h>
using namespace std;
int main()
{
  int x=0, y=0;
  char s[200];
  cin>>s;
  for(int i=0; s[i]!='\0'; i++)
  {
    if(s[i]=='U')
    {
      y++;
    }
    if(s[i]=='D')
    {
      y--;
    }
    if(s[i]=='R')
    {
      x++;
    }
    if(s[i]=='L')
    {
      x--;
    }
  }
  cout<<x<<" "<<y<<endl;
}
