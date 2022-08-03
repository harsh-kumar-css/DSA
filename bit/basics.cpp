#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n = 181;                                    // 10110101
    int onmask = 1<<3;                              // 00001000
    int offmask = ~(1<<4);                          // 11101111
    int toggle = 1<<3;                              // 00010000
    int check = 1<<2;                                 // 
    int a = n|onmask;
    int b = n&offmask;
    int c = n^toggle;
    int d = n&check;
    cout<<a<<endl<<b<<endl<<c<<endl;
    if(d == 0) cout<<"false";
    else cout<<"true";
}