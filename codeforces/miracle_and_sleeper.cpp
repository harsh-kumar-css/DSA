#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t=0;
    cin>>t;
    vector<int>v;
    while(t--)
    {
        long long int a=0,b=0;
        cin>>a>>b;
        if(a==b) v.push_back(0);
        else{
            if(a > b/2)
            {
                v.push_back(b%a);
            }
            else{
                long long int c = b/2 ;
                c++;
                v.push_back(b%c);
            }
        }
    }
    for(auto it:v)
    {
        cout<<it<<endl;
    }
}