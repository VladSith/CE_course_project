#include <iostream>
#include <cstdlib>
#include <math.h>
#include <iomanip>
#include <string>

using namespace std;

class trainstation
{

    int peronquantity = 5;
    bool peron[5] = {false, false, false, false, false};

public:
    trainstation(bool p, int pe) :peron(){}
    trainstation() {}
    void set_trainstation(trainstation v[]);
    void show(trainstation v[]);
};

