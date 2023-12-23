#include "tacka.h"
#include <cmath>
using namespace std;

double Tacka::rastojanje(Tacka t) const
{
    return sqrt(pow(x - t.x, 2) + pow(y - t.y, 2));
}
