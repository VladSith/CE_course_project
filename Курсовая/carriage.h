#include <iostream>
#include <cstdlib>
#include <math.h>
#include <iomanip>
#include <string>

using namespace std;

class �arriage
{

    string tipe;
    int seat;
    int loose_seat;

public:

    �arriage(int v, string t, int m, int nm) :tipe(t), seat(m), loose_seat(nm) {}
    �arriage() {}
    void set_�arriage();
    void show_�arriage()const;
    void buy_Seat();

};
