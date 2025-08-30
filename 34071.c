#include <stdio.h>

int main() {
    int n, max, min, fir, t;
    scanf("%d", &n);
    for(int i=0;i<n;i++) {
        scanf("%d", &t);
        if(!i) fir=t;
        if(!i||max<t) max=t;
        if(!i||min>t) min=t;
    }
    if(fir==max) printf("hard");
    else if(fir==min) printf("ez");
    else printf("?");
    return 0;
}
