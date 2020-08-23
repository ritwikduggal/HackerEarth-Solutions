#include<iostream>
using namespace std;
int main()
{
  int t;
  cin>>t;
  int T[t];
  for(int i=0; i<t; i++)
  {
    cin>>T[i];
  }
  for(int i=0; i<t; i++)
  {
    if(T[i]%6==0 || T[i]%6==1)
    {
      if(T[i]%12==0)
      {
        cout<<(T[i]-11)<<" WS"<<endl;
      }
      else if(T[i]%12==1)
      {
        cout<<T[i]+11<<" WS"<<endl;
      }
      else if(T[i]%6==0)
      {
        cout<<T[i]+1<<" WS"<<endl;
      }
       else if(T[i]%6==1)
       {
         cout<<T[i]-1<<" WS"<<endl;
       }
     }
     else if(T[i]%3==0 || T[i]%3==1)
     {
       if(T[i]%4==0)
       {
         cout<<T[i]+5<<" AS"<<endl;
       }
       else if((T[i]-1)%4==0)
       {
         cout<<T[i]-5<<" AS"<<endl;
       }
       else if((T[i]-10)%12==0)
       {
         cout<<T[i]-7<<" AS"<<endl;
       }
       else if((T[i]-3)%12==0)
       {
         cout<<T[i]+7<<" AS"<<endl;
       }
     }
     else
     {
       if((T[i]-5)%12==0)
       {
         cout<<T[i]+3<<" MS"<<endl;
       }
       else if((T[i]-8)%12==0)
       {
         cout<<T[i]-3<<" MS"<<endl;
       }
       else if((T[i]-2)%12==0)
       {
         cout<<T[i]+9<<" MS"<<endl;
       }
       else if((T[i]-11)%12==0)
       {
         cout<<T[i]-9<<" MS"<<endl;
       }
     }
  }
}
