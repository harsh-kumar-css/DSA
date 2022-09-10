#include "parkingLot.h"
#include <bits/stdc++.h>
using namespace std;

void ParkingLot :: createParkingLot(int n)
{
    if(n<=0)
    {
        cout<<"Invalid number of slots !!"<<endl;
        return;
    }

    maxSize = n;
    slots.resize(n+1,0);
    cout<<"Created parking with slots "<<n<<endl;
}

void ParkingLot :: park(string registrationNumber,int age)
{
    if(maxSize == 0)
    {
         cout<<"Sorry , there is no parking lot created !!"<<endl;
        return;
    }

    if(isFull()) 
    {
        cout<<"Sorry we can't park you car , all slots are full !!"<<endl;
        return;
    }

    for(int i=1;i<maxSize;i++)
    {
        if(slots[i] == 0)
        {
            slots[i] = 1;
            currentCars++;
            slotDetails[i] = {registrationNumber,age};
            cout<<"Car with Registration Number \""<<registrationNumber<<"\"have been parked at slot number "<<i<<endl;
            return;
        }
    }

}

void ParkingLot :: getRegistrationNumberfromAge(int age)
{
     if(maxSize == 0)
    {
         cout<<"Sorry , there is no parking lot created !!"<<endl;
        return;
    }

    bool flag = false;
    for(auto i:slotDetails)
    {
        if(i.second.second == age)
        {
            flag = true;
            cout<<i.second.first<<", ";
        }
    }
    if(!flag)
    {
        cout<<"No car found with driver having age "<<age;
    }
    cout<<endl;
}

void ParkingLot :: getSlotNumbersfromAge(int age)
{
    if(maxSize == 0)
    {
        cout<<"Sorry , there is no parking lot created !!"<<endl;
        return;
    }
    
    bool flag = false;

    for(auto i:slotDetails)
    {
        if(i.second.second == age) 
        {
            flag = true;
            cout<<i.first<<", ";
        }
    }

    if(!flag)
    {
        cout<<"There is No slot where driver with age "<<age<<" have parked a car !!";
    }

    cout<<endl;
}

void ParkingLot :: getSlotNumberfromRegistraionNumber(string registrationNumber)
{ 
    if(maxSize == 0)
    {
        cout<<"Sorry , there is no parking lot created !!"<<endl;
        return;
    }

    if(isEmpty())
    {
        cout<<"There is no car in the parking lot !!"<<endl;
        return;
    }

    bool flag = false;
    
    for(auto i: slotDetails)
    {
        if(i.second.first == registrationNumber)
        {
            flag = true;
            cout<<"The Car with registraion number "<<registrationNumber<<" is parked at slot "<<i.first<<endl;
            break;
        }
    }

    if(!flag)
    {
        cout<<"There is no car found having registration number "<<registrationNumber<<endl; 
    } 
}

void ParkingLot :: leave(int slotNo)
{   
    if(maxSize == 0)
    {
        cout<<"Sorry , there is no parking lot created !!"<<endl;
        return;
    }

    if(isEmpty())
    {
        cout<<"There is no car in the parking lot !!"<<endl;
        return;
    }

     if(slots[slotNo] == 1)
     {
        slots[slotNo] = 0;
        currentCars--;
        slotDetails.erase(slotNo);
        cout<<"Slot Number "<<slotNo<<" is now available for parking !!"<<endl;
        return;
     }

    if(slots[slotNo] == 0)
    {
        cout<<slotNo<<"is already empty"<<endl;
        return;
    }

}