#include<bits/stdc++.h>
using namespace std;

class A 
{
    public : 

    void f1()
    {
        cout<<"This is the parent class"<<endl;
    }
};

class B : public A
{
    public :

    void f1()
    {
        cout<<"This is the child class"<<endl;
    }
};

int main()
{
    A ob1;
    B ob2;
    A* ptr ;
    ptr = &ob2;   // as the address to the pointers are allocated at the run time (late binding)
    ptr->f1();    // we want the f1() of the class B (child class) should get executed , as ob2 is object of class B ,But
                  // but the f1() of the parent class (class A) is executed because
                  // this executes in the early binding , to bind the function f1 the compiler sees the type of the pointer
                  // and finds that the ptr is of type A , so function f1() of class A is binded with ptr.
}