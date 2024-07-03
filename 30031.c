#include <stdio.h>
int main() {
    int n, t, tt, sum=0;
    scanf("%d", &n);
    for(int i=0;i<n;i++) {
        scanf("%d %d", &t, &tt);
        if(t==136) sum+=1000;
        else if(t==142) sum+=5000;
        else if(t==148) sum+=10000;
        else sum+=50000;
    }
    printf("%d", sum);
}