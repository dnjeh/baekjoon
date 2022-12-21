#include <stdio.h>
int m[100];
int main() {
    int i, avg=0, many[2]={0, }, t;
    for(i=0;i<10;i++) {
        scanf("%d", &t);
        m[t/10]++;
        avg+=t;
    }
    avg/=10;
    for(i=0;i<100;i++) {
        if(many[1]<m[i]) {
            many[0]=i;
            many[1]=m[i];
        }
    }
    many[0]*=10;
    printf("%d\n%d", avg, (many[1]==1)?t:many[0]);
}