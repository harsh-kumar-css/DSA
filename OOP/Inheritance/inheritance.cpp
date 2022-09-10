#include<bits/stdc++.h>
using namespace std;
class Human
{
    public:

    int height;
    int weight;
    int age;

    void setAge(int x)
    {
        age = x;
    }
};

class Male : protected Human
{
    public :

    string color;

    void set(int x)
    {
        setAge(x);
    }
    void getAge()
    {
        cout<<age;
    }

};

int main()
{
    Male obj1;
    // cout<<obj1.age<<endl;         // these are showing error coz age , height and weight are inherited in Male as protected member
    // cout<<obj1.height<<endl;      // and protected memebers can only be used inside the child and parent class itself ,not outside
    // cout<<obj1.weight<<endl;
    obj1.set(24);                   // as the Male class is the child class , so it can use the protected member and fuctions of Animal class
    obj1.getAge();
    
}  