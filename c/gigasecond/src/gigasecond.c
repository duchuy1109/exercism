#include "gigasecond.h"
#include <math.h> 


time_t gigasecond_after(time_t time) 
{
    // return add_date(now, (pow(10, 9)));
    return (time + 1000000000);
}
