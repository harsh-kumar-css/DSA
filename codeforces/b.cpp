#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n =0,q=0;
    cin>>n>>q;
    int sum =0,x=0;
    vector<int>v;
    while(n--)
    {
        cin>>x;
        sum+=x;
        v.push_back(x);
    }
    while(q--)
    {
        int type = 0;
        cin>>type;
        if(type == 1)
        {
            int ind = 0,val=0;
            cin>>ind>>val;
            sum-=v[ind-1];
            sum+=val;
            v[ind-1] = val;
        }
        else{
            int val =0;
            cin>>val;
            int size = v.size();
            vector<int>temp(size,val);
            v = temp;
            sum = val*size;
        }

            cout<<sum<<endl;
    }
}