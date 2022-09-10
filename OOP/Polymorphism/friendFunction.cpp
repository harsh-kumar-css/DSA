
// friend function is not a member function 
// it is declared inside a class and defined out side the class , and contains a friend keyword in the starting of its definition
// it can access the member variables and fuctions of the class , but not directly like the member functions
// it has no caller object means, it is called without an object of the class as it is not a member function of the class.

// advantage -
// 1) friend function can become friend to more than one class
// 2) can simultaneously access members of mulitple classes.

#include<bits/stdc++.h>
using namespace std;
class B;
class A{

    int a,b;
    public :

    void setData(int x,int y)
    {
        a = x;
        b = y;
    }
    void showData()
    {
        cout<<a<<" "<<b;
    }

    friend void fun(A);   // this is only the friend function of class A

    friend void fun2(A,B);   // this is the friend function of both classes A and B
};

class B {
    
    int c,d;
    public :

    void setData(int x,int y)
    {
        c = x;
        d = y;
    }
    void showData()
    {
        cout<<c<<" "<<d;
    }

    friend void fun2(A,B);
};

void fun(A c)
{
    cout<<"the sum of a and b is : "<<c.a+c.b;
}

void fun2(A o1,B o2)   // this is the friend function of both classes A and B , and can access the members of both classes simultaneously
{
    cout<<" Elements in class A : "<<o1.a<<" "<<o1.b<<endl;
    cout<<" Elements in class B : "<<o2.c<<" "<<o2.d<<endl;
}

int main()
{
    A c1;
    B c2;
    c1.setData(2,3);
    c2.setData(4,5);
    fun2(c1,c2);
}