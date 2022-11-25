#include <stdio.h>
int a[10010]={0}, front=0, back=0, T, t, i;
char c[6];
int main() {
    scanf("%d", &T);
    for(i=0;i<T;i++) {
        scanf("%s", c);
        switch(c[0]) {
            case 'p':
                if(c[1]=='u') {
                    scanf("%d\n", &t);
                    a[back++%10010]=t;
                }
                else {
                    printf("%d\n", front%10010!=back%10010?a[front++%10010]:-1);
                }
                break;
            case 's':
                printf("%d\n", back-front);
                break;
            case 'f':
                printf("%d\n", front%10010!=back%10010?a[front%10010]:-1);
                break;
            case 'b':
                printf("%d\n", front%10010!=back%10010?a[back%10010-1]:-1);
                break;
            default:
                printf("%d\n", front%10010!=back%10010?0:1);
                break;
        }
    }
}