#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t=0;
    cin>>t;
    vector<long double>vec;
    for(int i=0;i<t;i++)
    {
        long long int n=0;
        cin>>n;
        vector<int>v;
        long long int x =0 ;
        long double sum =0 ;
        for(int i=0;i<n;i++)
        {
            cin>>x;
            v.push_back(x);
            sum += x;
        }

        sort(v.begin(),v.end());
       long double maxx = v[v.size()-1];
        sum = sum - maxx;
       long double rest = (sum)/(n-1);
        rest+= maxx;
       vec.push_back(rest);
    }
    for(int i=0;i<vec.size();i++)
    {
        cout<<fixed;
        cout<<setprecision(12);
        cout<<vec[i]<<endl;
    }
}