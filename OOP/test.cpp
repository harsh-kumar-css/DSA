#include<bits/stdc++.h>
using namespace std;

class Employee{
    private:
    string Name;
    string Company;
    int Age;
    
    public:
    Employee(string name,string company,int age)   // parameterized constructor
    {
        Name = name;
        Company = company;
        Age = age;
    }

    Employee(Employee& temp)  // copy constructor , this is the explicit one we made, but the default one also works same like this
    {
        this->Name = temp.Name;
        this->Company = temp.Company;
        this->Age = temp.Age;
    }

    void Intro()
    {
        cout<<Name<<" "<<Company<<" "<<Age<<endl;
    }
};
 
int main()
{

   // static allocation 

   Employee employee1("Harsh","Google",20);
   Employee employeeCopy(employee1);         // invoked copy constructor , there is a default copy constructor we dont need to make,we can make  one if we want
   employeeCopy.Intro();
   employee1.Intro();


   // dynamic allocation

    //  Employee* employee1 = new Employee("Harsh","Google",20);
    //  (*employee1).Intro();
    //  Employee* employeeCopy = new Employee(*employee1);
    //  (*employeeCopy).Intro();

};
