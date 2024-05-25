#include <stdio.h>

int main() {
    int a[3]={-1,-1,-1}, sum=0, t;
    char ct[4];
    for(int i=0;i<3;i++) {
        scanf("%d", &t);
        if(a[0]==-1||a[0]>t) a[0]=t;
        if(a[2]==-1||a[2]<t) a[2]=t;
        sum+=t;
    } 
    a[1]=sum-a[0]-a[2];
    scanf("%s", ct);
    for(int i=0;ct[i];i++) {
        printf("%d%c", a[ct[i]-65], i==2?'\n':' ');
    }
    return 0;
}
