#include<bits/stdc++.h>
#include "parkingLot.h"
using namespace std;

int main()
{
    freopen("input.txt","r",stdin);

    string command;
    ParkingLot parkinglot;

    while(cin>>command)
    {
        if(command == "Create_parking_lot")
        {
            int slots = 0;
            cin>>slots;
            parkinglot.createParkingLot(slots);
        }
        else if(command == "Park")
        {
            string registraionNo,driverage;
            int age;
            cin>>registraionNo>>driverage>>age;

            parkinglot.park(registraionNo,age);
        }
        else if(command == "Slot_numbers_for_driver_of_age")
        {
            int age = 0;
            cin>>age;
            parkinglot.getSlotNumbersfromAge(age);
        }
        else if(command == "Slot_number_for_car_with_number")
        {
            string registraionNo;
            cin>>registraionNo;
            parkinglot.getSlotNumberfromRegistraionNumber(registraionNo);
        }
        else if(command == "Vehicle_registration_number_for_driver_of_age")
        {
            int age = 0;
            cin>>age;
            parkinglot.getRegistrationNumberfromAge(age);
        }
        else if(command == "Leave")
        {
            int slot = 0;
            cin>>slot;
            parkinglot.leave(slot);
        }
    }

    return 0;
}

