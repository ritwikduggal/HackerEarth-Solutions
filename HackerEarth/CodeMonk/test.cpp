#include<iostream>
using namespace std;
int main()
{
  long int t;
  cin>>t;
  for(int o=0; o<t; o++)
  {
    long int n, r;
    cin>>n>>r;
	  r=r%n;
    int a[n];
    for(int i=0; i<n; i++)
    {
       cin>>a[i];
    }
    for(int i=0; i<n; i++)
    {
      cout<<a[(i+n-r)%(n)]<<" ";
    }
	cout<<endl;
  }

}
