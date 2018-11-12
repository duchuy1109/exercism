#include "gigasecond.h"
#include <math.h> 

struct tm tm_now, tm_add_gigasecond;

static time_t add_date(time_t time1, time_t time2)
{
   struct tm date;
   struct tm *date1, *date2;

   date1 = localtime(&time1);
   date2 = localtime(&time2);

   date.tm_year = date1->tm_year + date2->tm_year;
   date.tm_mon = date1->tm_mon + date2->tm_mon;
   date.tm_mday = date1->tm_mday + date2->tm_mday;
   date.tm_hour = date1->tm_hour + date2->tm_hour;
   date.tm_min = date1->tm_min + date2->tm_min;
   date.tm_sec = date1->tm_sec + date2->tm_sec;
   date.tm_isdst = 0;
   return mktime(&date);
}

time_t gigasecond_after(time_t now) 
{
    return add_date(now, (pow(10, 9)));
}
