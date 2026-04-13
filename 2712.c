#include <stdio.h>

int main() {
    char t[5];
    double a;
    int T;
    scanf("%d", &T);
    for(int i=0;i<T;i++) {
        scanf("%lf %s", &a, t);
        if(t[0]=='k') printf("%.04lf lb\n", a*2.2046);
        else if(t[0]=='g') printf("%.04lf l\n", a*3.7854);
        else if(t[1]=='b') printf("%.04lf kg\n", a*0.4536);
        else printf("%.04lf g\n", a*0.2642);
        
    }
    return 0;
}
