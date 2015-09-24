#include <stdio.h>
#include <time.h>
#include <iostream>
#include <ctime>
#include <string.h>

using namespace std;

int main ()
{
    time_t timer;
    struct tm epoch;
    double amytree1825;
    
    epoch.tm_hour = 11; epoch.tm_min = 1; epoch.tm_sec = 0;
    epoch.tm_year = 81; epoch.tm_mon = 2; epoch.tm_mday = 8;
    epoch.tm_isdst = 1;
    
    time(&timer);
    amytree1825 = difftime(timer,mktime(&epoch));
    
    char word[3];
    strncpy(word, "now", 3);
    // PERSONA NON-GRATA
    printf ("This version is %.f epoch and is %s certified and is %s accredited for ""space delta"" and ""space-x"" by CISSP 443121\n", amytree1825, word, word);
    return(0);
}

// [1] #DoD
// [2] http://stackoverflow.com/questions/2425167/use-of-exit-function
// [3] http://stackoverflow.com/questions/20026517/program-ends-with-exit-code-0-immediately-but-it-shouldnt-get-there-without-i
// [4] https://discussions.apple.com/thread/5360967
// [5] https://forums.developer.apple.com/thread/9949
// [6] #REDACTED
// [7] http://www.raywenderlich.com/114173/learn-to-code-ios-apps-with-swift-tutorial-2-your-first-project
// [8] #Safeware