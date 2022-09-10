
// when an operator is overloaded with many jobs it is known as operator overloading.

// when we do some operation using some operators on objects like let say, we want to do c3 = c1+c2 ,(c3,c2,c1 are objects of some class)
// which basically means that we want to add the values in c1 object and c2 object and store the result object in c3,
// but we cant do it normally as we do in the case of intergers as because the integers are of primitive type and the compiler
// knows how the operator should work on the prmivite types , BUT for the non-primitive types like objects we have to overload
// the operator inorder for the compiler to understand what action do we want to perform when we use these operators.
// THIS WHAT WE CALL OPERATOR OVERLOADING

#include<bits/stdc++.h>
using namespace std;

class A
{

    public : 

    int a;
    int b;

    // syntax - "return_type" operator "operator" () {   }

    void operator+ (A obj)  // overloaded the + operator now ,it subtracts two numbers 
    {
        int val1 = this->a;
        int val2 = obj.a;

        cout<<val2-val1<<endl;
    }
 
    void operator () ()   // overloaded the () operator
    {
        cout<<"overloaded the () operator"<<endl;
    }

};

int main()
{
    A obj1, obj2;

    obj1.a = 4;
    obj2.a = 10;

    obj1 + obj2;         // obj2 is the paramter passed as obj in "void operator+ (A &obj)"

    obj1 ();
}