#include<iostream>
using namespace std;
int main()
{
  char s[20];
  cin>>s;
  int z=0, o=0;
  for(int i=0; s[i]!='\0'; i++)
  {
    if(s[i]=='z')
    {
      z++;
    }
    if(s[i]=='o')
    {
      o++;
    }
  }
  if((o/2)==z && o%2==0)
  {
    cout<<"Yes"<<endl;
  }
  else
  {
    cout<<"No"<<endl;
  }
}
