#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n=0;
    cin>>n;
    vector<int>v{1};
    for(int j=2;j<=n;j++)
    {
        int size = v.size();
        vector<int>temp;
        int carry = 0;
        for(int i = size-1;i>=0;i--)
        {
            if(i==0)
            {
                temp.push_back((v[i]*j)+carry);
            }
            else
            {int res = (v[i]*j) + carry;
            temp.push_back(res%10);
            carry = res/10;}
        }
        v = temp;
    }
    n = v.size();
    for(int i=n-1;i>=0;i--)
    {
        cout<<v[i];
    }
}