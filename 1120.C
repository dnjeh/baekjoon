#include <stdio.h>
int main() {
    int i, j, min=-1, t=0;
    char a[2][51];
    for(i=0;i<2;i++) scanf("%s", &a[i]);
    for(i=j=0;a[1][j];i++) {
        t=0;
        for(j=i;a[0][j-i];j++) {
            if(a[0][j-i]!=a[1][j]) t++;
        }
        if(!i||min>t) min=t;
    }
    printf("%d", min);
}