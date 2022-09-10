// the object of a parent class can contain and point to the address of all of its chid class ,


// early binding - when the binding of the function to the object is done during the compile time
// late binding -  

#include<bits/stdc++.h>
using namespace std;

class A 
{
    public : 

    virtual void f1()
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
    ptr = &ob2;   
    ptr->f1();  //here, the issue was that we wanted the f1 of class B to execute as the p1 points to ob2, but
                //due to the early binding( where the binding of the function with the object/pointer is done at compile time
                // by seeing the type of the object/pointer type), f1() of class A get binded to ptr
                // due to which the f1() of the class A gets executed ,which we dont't want

                //to avoid this we want that late binding should happend (binding should be done at run time , which means that
                //the binding of the function should be done by seeing the object type to which the pointer is pointing to) 

                // this is done by adding the virutal keyword before the function f1
                // which means that we should always do late binding of f1() function for all the parent and child classes . 
}

