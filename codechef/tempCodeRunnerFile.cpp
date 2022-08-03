#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int t=0;
    cin>>t;
    vector<int>v;
    while (t--)
    {
        set<int>s;
        for(int i=0;i<4;i++)
        {
            long int x;
            cin>>x;
            s.insert(x);
        }
        if(s.size() == 3) v.push_back(2);
        else v.push_back(s.size()/2);
    }
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<endl;
    }

    
}