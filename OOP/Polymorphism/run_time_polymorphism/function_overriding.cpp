#include<bits/stdc++.h>
using namespace std;

class Animal
{
    public:

    void speak()
    {
        cout<<"speaking"<<endl;
    }
};

class Dog : public Animal
{
    public:

    void speak()
    {
        cout<<"barking"<<endl;
    }
};

int main()
{
    Dog obj;
    obj.speak();     // if goes into the class and finds speak() function , then execute that but if not found execute the parent's one 
}