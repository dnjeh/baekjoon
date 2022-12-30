#include <stdio.h>
int main() {
    char a[11]={'\0', }, i, cnt=0, x[2]={1, 1};
    scanf("%s", a);
    for(cnt=0;a[cnt+1]!='\0';cnt++) {
        x[0]=x[1]=1;
        for(i=0;i<=cnt;i++) {
            x[0]*=(a[i]-48);
        }
        for(i=cnt+1;a[i]!='\0';i++) {
            x[1]*=(a[i]-48);
        }
        if(x[0]==x[1]) {
            printf("YES");
            return 0;
        }
    }
    printf("NO");
}