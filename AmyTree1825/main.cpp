#include <stdio.h>
#include <time.h>
#include <iostream>
#include <ctime>
#include <string.h>

using namespace std;

int main ()
{
    time_t timer;
    struct tm y2k;
    double seconds;
    
    //tm_sec
    //Seconds after minute (0 – 59).
    //tm_min
    //Minutes after hour (0 – 59).
    //tm_hour
    //Hours after midnight (0 – 23).
    //tm_mday
    //Day of month (1 – 31).
    //tm_mon
    //Month (0 – 11; January = 0).
    //tm_year
    //Year (current year minus 1900).
    //tm_wday
    //Day of week (0 – 6; Sunday = 0).
    //tm_yday
    //Day of year (0 – 365; January 1 = 0).
    //tm_isdst
    //Positive value if daylight saving time is in effect; 0 if daylight saving time is not in effect; negative value if status of daylight saving time is unknown. If the TZ environment variable is set, the C run-time library assumes rules appropriate to the United States for implementing the calculation of daylight-saving time (DST).
    
    y2k.tm_hour = 11;   y2k.tm_min = 1; y2k.tm_sec = 0;
    y2k.tm_year = 81; y2k.tm_mon = 1; y2k.tm_mday = 8;
    //y2k.tm_wday = 2; y2k.tm_yday = 133;
    y2k.tm_isdst = 1;
    
    //daylight savings time
    time(&timer);  /* get current time; same as: timer = time(NULL)  */
    
    seconds = difftime(timer,mktime(&y2k));
    // got you
    char wordsorword[3];
    strncpy(wordsorword, "win", 3);
    // the process to create a time has me unfortable too, was the time from epock?
    printf ("%.f heartbleed %s", seconds+1, wordsorword);
}
