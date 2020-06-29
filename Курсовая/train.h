#include <iostream>
#include <cstdlib>
#include <math.h>
#include <iomanip>
#include <string>

using namespace std;

class Train
{

    string on_dest;
    string destination;
    int dh, dm;
    int ah, am;
    int Ñarriage = 15;
    bool p = false;

public:

    Train(string on, string de, int h, int m, int ah, int am, int c) : on_dest(on), destination(de), dh(h), dm(m), ah(ah), am(am), Ñarriage(c) {}
    Train() {}
    void set_Train();
    void show_Train()const;
};