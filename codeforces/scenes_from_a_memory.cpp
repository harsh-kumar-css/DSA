#include<bits/stdc++.h>
using namespace std;
void print(string s)
{
     for(int i=0;i<s.size();i++)
        {
            if(s[i] == '1' || s[i] == '4' || s[i] == '6' || s[i] == '8' || s[i] == '9' )
            {
                cout<<1<<endl<<s[i]<<endl;
                return;
            }
            else{
                int count[8];
                memset(count,0,sizeof(count));
                for(int i=0;i<s.size();i++)
                {   
                    if(s[i] == '2') count[2]++;
                    if(s[i] == '3') count[3]++;
                    if(s[i] == '5') count[5]++;
                    if(s[i] == '7') count[7]++;
                }
                for(int j=0;j<8;j++)
                {
                    if(count[i] > 1)
                    {
                        cout<<2<<endl<<i<<i<<endl;
                        return;
                    }
                }
                memset(count,-1,sizeof(count));
                for(int i=0;i<s.size();i++)
                {
                    if(s[i] == '2') count[2] = i;
                    if(s[i] == '3') count[3] = i;
                    if(s[i] == '5') count[5] = i;
                    if(s[i] == '7') count[7] = i;
                }
                if(count[2] != -1 && count[5] != -1)
                {
                    if(count[2] < count [5])
                    {
                        cout<<2<<endl<<25<<endl;
                        return;
                    }
                }
                if(count[2] != -1 && count[7] != -1)
                {
                    if(count[2] < count[7])
                    {
                        cout<<2<<endl<<27<<endl;
                        return;
                    }
                }
                if(count[5] != -1 && count[2] != -1)
                {
                    if(count[5] < count[2])
                    {
                        cout<<2<<endl<<52<<endl;
                        return;
                    }
                }
                if(count[5] != -1 && count[7] != -1)
                {
                    if(count[5] < count[7])
                    {
                        cout<<2<<endl<<57<<endl;
                        return;
                    }
                }
            }
        }
}
int main()
{
    int t=0;
    cin>>t;
    while(t--)
    {
        string s;
        int n;
        cin>>n;
        cin>>s;
        print(s);
    }
}