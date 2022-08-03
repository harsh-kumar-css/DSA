#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int t = 0;
    cin>>t;
    vector<int>v;
    while(t--)
    {  long int sum1=0;
        long int sum2 =0 ;
        for(int i=0;i<6;i++)
        {
            long int x;
            cin>>x;
            if(i<3)
            {
                sum1+=x;
            }
            else if(i>=3)
            {
                sum2+=x;
            }
            
        }
        if(sum1>sum2)v.push_back(1);
        else v.push_back(2);
    }
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<endl;
    }
}