#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t = 0;
    cin>>t;
    while(t--)
    {
      long long int n = 0,ans=0;
      cin>>n;
      vector<long long int>a;
      vector<long long int>b;
      for(long long int i=0;i<n;i++)
      {
          long long int x = 0;
          cin>>x;
          a.push_back(x);
      }
      for(long long int i=0;i<n;i++)
      {
          long long int x = 0;
          cin>>x;
          b.push_back(x);
      }
      for(long long int i=1;i<n;i++)
      {
          ans += min(abs(a[i-1]-a[i]) + abs(b[i-1]-b[i]) , abs(a[i-1]-b[i])+abs(b[i-1]-a[i]));
      }
      cout<<ans<<endl;
    }   
}