#include<bits/stdc++.h>
using namespace std;
int main()
{
  long int sum=0, n, i=10;
  cin>>n;
  while(n>0)
  {
    sum+=(n%10)*i;
    n=n/10;
	i--;
  }
  if(sum%11==0)
  {
    cout<<"Legal ISBN"<<endl;
  }
  else
  {
    cout<<"Illegal ISBN"<<endl;
  }
}
