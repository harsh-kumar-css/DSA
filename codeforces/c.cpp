#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t = 0;
    cin>>t;
    while(t--)
    {
        long long int n = 0;
        cin>>n;
        unordered_map<int,pair<int,int>>m;
        for(int i=0;i<n;i++)
        {
            int x = 0;
            cin>>x;
            m[x].first++;
            m[x].second++;
        }
        bool found = false,allZero=true;
        int count=0;
        while(true)
        {
            for(auto i:m)
            {
                count++;
                if(i.second.first != 0 && i.second.first < i.second.second)
                {
                    i.second.first--;
                    if(i.second.first == 0)m.erase(i.first);
                    allZero = false;
                }
                else if(i.second.first == i.second.second)
                {
                    if(found == false) i.second.first--;
                    found = true;
                    allZero = false;
                }
            }
            if(allZero)break;
        }
        cout<<------------count<<endl;
    }   
}