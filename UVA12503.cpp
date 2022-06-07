#include <bits/stdc++.h>
using namespace std;
int main()
{
  int t,n,x,sum,i;
  int a[105];
  char c[10];
  cin>>t;
  while(t--)
  {
      sum=0;
      cin>>n;
      for(i=1;i<=n;i++)
      {
        cin>>c;
        if(!strcmp(c,"LEFT"))
           a[i]=-1;
        else if(!strcmp(c,"RIGHT"))
           a[i]=1;
        else
        {
          cin>>c;
          cin>>x;
          a[i]=a[x];
        }
        sum+=a[i];
      }
      cout<<sum<<endl;
  }
}
