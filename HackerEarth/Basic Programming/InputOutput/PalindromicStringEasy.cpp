#include<iostream>
#include<string.h>
#include<bits/stdc++.h>
using namespace std;
int main()
{
  char s[1000];
  int flag=0;
  cin>>s;
  for(int i=0; i<strlen(s); i++)
  {
    if(s[i]!=s[strlen(s)-i-1])
    {
      cout<<"NO";
      flag++;
      break;
    }
  }
  if(!flag)
  {
    cout<<"YES";
  }
}
