#include <stdio.h>
int main() {
    int a[21]={0, }, T, t, i, j;
    char st[6];
    scanf("%d", &T);
    for(i=0;i<T;i++) {
        scanf("%s %d", st, &t);
        switch(*st) {
        case 'r':
            a[t]=0;
            break;
        case 'c':
            printf("%d\n", a[t]?1:0);
            break;
        case 't':
            a[t]=!a[t];
            break;
        case 'e':
            for(j=0;j<=20;j++) a[j]=0;
            break;
        default:
            if(st[1]=='d') {
                a[t]=1;
            }
            else {
                for(j=0;j<=20;j++) a[j]=1;
            }
            break;
        }
    }
}