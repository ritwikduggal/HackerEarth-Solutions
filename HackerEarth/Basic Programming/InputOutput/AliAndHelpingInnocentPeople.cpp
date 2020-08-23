#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n1, n2, n3;
  char c1, c2;
  cin>>n1>>c1>>n2>>c2>>n3;
  if(c2!='-')
  {
    cout<<"invalid";
  }
  else if(c1=='A'|| c1=='E'||c1=='I'||c1=='O'||c1=='U'|| c1=='Y')
  {
    cout<<"invalid";
  }
  else if(!(((n1%10) + (n1/10))%2==0))
  {
    cout<<"invalid";
  }

  else if(!(((n2%10) + (n2/10))%2==0))
  {
    cout<<"invalid";
  }
  else if(!(((n2/100) + (n2/10))%2==0))
  {
    cout<<"invalid";
  }

  else if(!(((n3%10) + (n3/10))%2==0))
  {
    cout<<"invalid";
  }
  else
  {
    cout<<"valid";
  }
}
