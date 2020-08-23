#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin>>t;
  for(int i=0; i<t; i++)
  {
    int sh, sm, eh, em;
    cin>>sh>>sm>>eh>>em;
    int h=eh-sh;
    int m=em-sm;
    if(m<0)
    {
      h--;
      m+=60;
    }
    cout<<h<<" "<<m<<endl;
  }
}
