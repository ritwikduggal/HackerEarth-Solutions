#include<iostream>
#include<string.h>
#include<cstring>
#include<bits/stdc++.h>
using namespace std;
int main()
{
  char s[100];
  cin>>s;
  for(int i=0; s[i]!='\0'; i++)
  {
    if(islower(s[i]))
    {
      s[i] = s[i] - 32;
    }
    else if(isupper(s[i]))
    {
      s[i] = s[i] + 32;
    }
    cout<<s[i];
  }
}
