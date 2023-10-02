#include <stdio.h>
#define END 500009
int k, n, ind;
char sta[END+1], a[END+1];
int main() {
    int i, t;
    scanf("%d %d\n", &n, &k);
    t=k;
    scanf("%s", a);
    for(i=0;a[i];i++) {
        if(k<=0) sta[ind++]=a[i];
        else if(!ind||sta[ind-1]>=a[i]) {
            sta[ind++]=a[i];
        }   
        else {
            sta[--ind]=0;
            i--;
            k--;
        }
    }
    sta[n-t]=0;
    printf("%s", sta);
}