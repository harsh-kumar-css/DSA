// Function Overriding- when the child has parent class contains functions havin the same name and prototype ,it is called function overriding

// we use function overriding when we want to overwrite some of the functions in the parent class in the child class
// here in the example below , there is a parent Car class , that has shiftGear() function 
// now there is also SportsCar class , which have all the feature of a class (shown by inheritance in example) , and also additonal features
// The sports Car has some different way to shifting the gear so we can override the shiftGear function in the child class , that is 
// being inherited from the Car class int the sportsCar class.

// so now all the Car objects, will shift the gear , according to the shiftGear() function  in class Car
// and all the sportsCar objects , will shift the gear, accroding to the shiftGear() function in class SportsCar. 

#include<bits/stdc++.h>
using namespace std;

class Car{

  public :

  void shiftGear()
  {
      cout<<"shifting gear from class"<<endl;
  }

};


class SportsCar : public Car
{

    public:

    void shiftfGear()
    {
        cout<<"shifting gear from sports car"<<endl;
    }
};

int main()
{
    SportsCar obj;
    Car obj2;
    obj.shiftfGear();
    obj2.shiftGear();

}