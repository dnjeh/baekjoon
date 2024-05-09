#include <stdio.h>
int main() {
    int T, a, b, t, tt;
    scanf("%d", &T);
    for(int i=0;i<T;i++) {
        a=b=0;
        for(int j=0;j<9;j++) {
            scanf("%d %d", &t, &tt);
            a+=t;
            b+=tt;
        }
        if(a>b) printf("Yonsei\n");
        else if(a==b) printf("Draw\n");
        else printf("Korea\n");
    }
}