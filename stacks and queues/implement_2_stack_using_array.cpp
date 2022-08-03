#include<bits/stdc++.h>
using namespace std;
class myStack{
   int arr[10005];
   int top1,top2,size;
   public:
   myStack()
   {
       top1 = -1;
       size = 10005;
       top2 = size;
   }
   void push1(int x)
   {
       top1++;
       arr[top1] = x;
       cout<<x<<" ";
   }
   void push2(int x)
   {
       top2--;
       arr[top2] = x;
       cout<<x<<" ";
   }
   int pop1()
   {
        if(top1 == -1) {
            cout<<-1<<" ";
            return -1;
        }
        else{
            int ans = arr[top1];
            top1--;
            cout<<ans<<" ";
            return ans;
        } 
   }
   int pop2()
   {
       if(top2 == size)  {
            cout<<-1<<" ";
            return -1;
        }
       else{
           int ans = arr[top2];
           top2++;
           cout<<ans<<" ";
           return ans;
       }
   }
};
int main()
{
    myStack s;
    s.push1(1);
    s.push1(2);
    s.push2(3);
    s.pop1();
    s.pop2();
}