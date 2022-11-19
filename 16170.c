#include <stdio.h>
#include <time.h>
int main() {
    int ti[4];
    time_t t;
    t = time(NULL);
    struct tm* a;
    a = localtime(&t);
    ti[0] = a->tm_year + 1900;
    ti[1] = a->tm_mon + 1;
    ti[2] = a->tm_mday;
    printf("%d\n%d\n%d", ti[0], ti[1], ti[2]);
}