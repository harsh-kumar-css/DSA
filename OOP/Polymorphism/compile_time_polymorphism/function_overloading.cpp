#include<bits/stdc++.h>
using namespace std;

// 

class A
{
    public :

    void sayHello()
    {
        cout<<"Hello from 1st function"<<endl;
    }

    int sayHello(char ch)
    {
        cout<<"Hello from the 2nd function"<<endl;
        return 1;
    }

    void sayHello(string name )
    {
        cout<<"Hello from the 3rd function"<<endl;
    }

    // int sayHello()                               // function with same name but different return type cannot be overloaded
    // {
    //     cout<<"Hello form 2nd function"<<endl;
    //     return 1;
    // }
};

int main()
{
    A obj1;
    obj1.sayHello();
    obj1.sayHello('a');
    string name = "harsh";
    obj1.sayHello(name);
    
}