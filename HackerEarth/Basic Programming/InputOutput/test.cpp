#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n, q;
   cin>>n>>q;
   int a[n];
   for(int i=0; i<n; i++)
   {
     cin>>a[i];
   }
   for(int i=0; i<q; i++)
   {
     int n1, n2;
     cin>>n1>>n2;
     cout<<a[n1-1]<<endl<<a[n2+1]<<endl;
     cout<<(a[n1+1]+a[n2+1])/2<<endl;
   }
}
