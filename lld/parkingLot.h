#include<bits/stdc++.h>
using namespace std;

class ParkingLot{

    private :

    int maxSize = 0;
    int currentCars = 0;

    bool isFull()
    {
        if(currentCars == maxSize) return true;
        return false;
    }

    bool isEmpty()
    {
        if(currentCars == 0 and maxSize != 0) return true;
        return false;
    }

    public:

    vector<int>slots;
    map<int,pair<string,int>>slotDetails;

    void createParkingLot(int n);
    void park(string registration_Number , int age);
    void getRegistrationNumberfromAge(int age);
    void getSlotNumbersfromAge(int age);
    void getSlotNumberfromRegistraionNumber(string registraionNumber);
    void leave(int slotNo);

};