#include <stdio.h>
#include <time.h>
int main() {
    time_t t;
    t = time(NULL);
    struct tm* monthandday;
    monthandday = localtime(&t);
    int y, m, d, h;
    y = monthandday->tm_year + 1900;
    m = monthandday->tm_mon + 1;
    d = monthandday->tm_mday;
    h = monthandday->tm_hour + 9;
    if(h>23) d++;
    printf("%04d-%02d-%02d", y, m, d);
}