#include <stdio.h>
int main() {
    double pre=999, t;
    for(scanf("%lf", &t);t!=999;scanf("%lf", &t)) {
        if(pre!=999) printf("%.02lf\n", t-pre);
        pre=t;
    }
}