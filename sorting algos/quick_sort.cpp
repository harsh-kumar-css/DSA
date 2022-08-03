#include<bits/stdc++.h>
using namespace std;
int partition(int t[],int low , int high)
{   
    int pivot = t[low];
    int i = low;
    int j = high;
    while(i<j)
    {
        while(t[i] <= pivot)
        {
            i++;
        }
        while(t[j] > pivot)
        {
            j--;
        }
        if( i< j) swap(t[i],t[j]);
    }
    swap(t[low],t[j]);
    return j;
}
void quickSort(int t[],int low , int high)
{   
    if(low < high)
    {
         int j = partition(t,low,high);
         quickSort(t,low,j);
         quickSort(t,j+1,high);
    }

    return;

}
int main()
{
    int t[10];
    for(int i=0;i<9;i++)
    {
        int x;
        cin>>x;
        t[i] = x;
    }
    t[9] = INT_MAX;
    quickSort(t,0,9);
    for(int i=0;i<9;i++)
    {
        cout<<t[i]<<" ";
    }
}