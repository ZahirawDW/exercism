#include "leap.h"
bool leap_year(int y)
{
    if (y % 4 == 0 && y % 100 == 0 && y % 400 == 0)
        return true;
    else if (y % 4 == 0 && y % 100 != 0 && y % 400 != 0)
        return true;
    else 
        return false;
}
