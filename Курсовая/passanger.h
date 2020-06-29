#include <iostream>
#include <cstdlib>
#include <math.h>
#include <iomanip>
#include <string>

using namespace std;

class Passenger
{

    char name[20];
    char surname[20];
    char father[20];
    char gender[20];
    int passport;
    int age;

public:

    void set_Passenger();
    void show_Passenger()const;

};
