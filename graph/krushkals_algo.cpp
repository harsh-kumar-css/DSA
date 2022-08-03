#include<bits/stdc++.h>
using namespace std;

class node{
public:
int u;
int v;
int wt;
node(int first , int second , int weight)
{
    u =first;
    v = second;
    wt = weight;
}

};

bool comp(node a, node b)
{
    return a.wt < b.wt;
}

int findPar(int u , vector<int>& Parent)
{
    if(u==Parent[u]) return u;
    return Parent[u] = findPar(Parent[u],Parent);
}

void unioun(int a , int b , vector<int>& Parent,vector<int>& rankk)
{
   a = findPar(a,Parent);
   b = findPar(b,Parent);
   if(rankk[a] > rankk[b])
   {
       Parent[b] = a;
   }
   else if(rankk[b] > rankk[a])
   {
       Parent[a] = b;
   }
   else if(rankk[b] == rankk[a])
   {
       Parent[a] = b;
       rankk[b]++;
   }
}

int main()
{
    int n ,e;
    cin>>n>>e;
    vector<node>edges;
    for(int i=0;i<e;i++)
    {
        int u,v,wt;
        cin>>u>>v>>wt;
        edges.push_back(node(u,v,wt));
    }

    sort(edges.begin(),edges.end(),comp);

    int cost=0;
    vector<pair<int,int>>MST;
    vector<int>parent(n);
    for(int i=0;i<n;i++)
    {
        parent[i] = i;
    }
    vector<int>rankk(n,0);

    for(int i=0;i<e;i++)
    {
        if(findPar(edges[i].u , parent) != findPar(edges[i].v,parent))
        {
            cost+= edges[i].wt;
            unioun(edges[i].u ,edges[i].v , parent,rankk);
            MST.push_back(make_pair(edges[i].u ,edges[i].v));
        }
    }
    cout<<cost<<endl;
    for(int i=0;i<MST.size();i++)
    {
        cout<<MST[i].first<<" "<<MST[i].second<<endl;
    }
}