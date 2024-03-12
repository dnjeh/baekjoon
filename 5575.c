#include <stdio.h>

int hms() {
    int t, tt, ttt;
    scanf("%d %d %d", &t, &tt, &ttt);
    return t*60*60+tt*60+ttt;
}

int main() {
    int a, b, t;
    for(int i=0;i<3;i++) {
        a=hms(); 
        b=hms();
        t=b-a;
        printf("%d %d %d\n", t/60/60, t%(60*60)/60, t%60);
    }
    return 0;
}
