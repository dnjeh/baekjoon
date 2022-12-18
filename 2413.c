#include <stdio.h>
int main() {
    int n, sum=0, i, j, tsum=0;
    char t1[1000];
    scanf("%d", &n);
    for(i=0;i<n;i++) {
        scanf("%s", t1);
        for(j=0;t1[j]!=',';j++);
        for(j++;t1[j]!=',';j++);
        for(j++;t1[j]!=',';j++);
        for(tsum=0;t1[j]!='\0';tsum++) {
            for(j++;t1[j]!=','&&t1[j]!='\0';j++);
        }
        sum+=tsum;
    }
    printf("%.2lf", sum/(double)n);
}