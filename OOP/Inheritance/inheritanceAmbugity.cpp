#include<bits/stdc++.h>
using namespace std;

class A{
    public :
    void func()          // this is a function that is having the same name in class A as well as class B
    {
        cout<<"this is A class"<<endl;
    }
};

class B{
    public :
    void func()
    {
        cout<<"this is B class"<<endl;
    }
};

class C : public A,public B{

};

int main()
{
    C obj;
    obj.A::func();       // to remove the inheritance ambugity we are using the scope resolution operator,  so specify which  class function to call 
    obj.B::func();
}

