#include<bits/stdc++.h>
using namespace std;

class Myqueue{
    int front ,rear;
    int arr[10005];
    public:
    Myqueue()
    {
        front =0;
        rear = 0;
    }
    void push(int x)
    {
        arr[rear] = x;
        rear ++;
        cout<<x<<" ";
    }
    int pop()
    {
        if(front < rear)
        {
            int ans = arr[front];
            front++;
            cout<<ans<<" ";
            return ans;
        }
        else
        {
            cout<<-1<<" ";
            return -1;
        }
    }
};
int main()
{
    Myqueue q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.pop();
    q.pop();
    q.pop();
    q.pop();

}