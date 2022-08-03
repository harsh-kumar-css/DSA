#include<bits/stdc++.h>
using namespace std;
int parent[100];
int rankk[100];

void makeSet()
{
    for(int i=0;i<100;i++)
    {
        parent[i] = i;
       rankk[i] = 0;
    }
}

int findPar(int node)
{
    if(parent[node] == node) return node;

    return parent[node] = findPar(parent[node]);
}

void Union(int a , int b)
{
    int first_Par = findPar(a);
    int second_Par = findPar(b);
    if(rankk[first_Par] > rankk[second_Par])
    {
        parent[second_Par] = first_Par;
    }
    else if(rankk[second_Par] > rankk[first_Par])
    {
        parent[first_Par] = second_Par;
    }
    else
    {
        parent[first_Par] = second_Par;
        rankk[second_Par]++;
    }
}

int main()
{
    makeSet();
    int m;
    cin>>m;
    while(m--)
    {
        int a,b;
        cin>>a>>b;
        Union(a,b);
    }
    if(findPar(2) != findPar(3))
    {
        cout<<"Different components"<<endl;
    }
    else{
        cout<<"same components"<<endl;
    }

}