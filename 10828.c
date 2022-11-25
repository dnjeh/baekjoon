#include <stdio.h>
int a[10000]={0}, now=0, T, t, i;
char c[6];
int main() {
    scanf("%d", &T);
    for(i=0;i<T;i++) {
        scanf("%s", c);
        switch(c[0]) {
            case 'p':
                if(c[1]=='u') {
                    scanf("%d\n", &t);
                    a[now++]=t;
                }
                else {
                    printf("%d\n", now?a[--now]:-1);
                }
                break;
            case 's':
                printf("%d\n", now);
                break;
            case 't':
                printf("%d\n", now?a[now-1]:-1);
                break;
            default:
                printf("%d\n", now?0:1);
                break;
        }
    }
}