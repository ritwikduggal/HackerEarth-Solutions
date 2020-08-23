#include<bits/stdc++.h>
using namespace std;
int main()
{
  char s[100];
  cin>>s;
  int sum=0;
  for(int i=0; s[i]!='\0'; i++)
  {
    sum+=(s[i]-96);
  }
  cout<<sum<<endl;
}
