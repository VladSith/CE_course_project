#include <iostream>
#include <cstdlib>
#include <math.h>
#include <iomanip>
#include <string>

using namespace std;

class Ñarriage
{

    string tipe;
    int seat;
    int loose_seat;

public:

    Ñarriage(int v, string t, int m, int nm) :tipe(t), seat(m), loose_seat(nm) {}
    Ñarriage() {}
    void set_Ñarriage();
    void show_Ñarriage()const;
    void buy_Seat();

};
