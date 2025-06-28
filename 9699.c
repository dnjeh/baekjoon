#include <stdio.h>

int main()
{
    int n, t, max;
    scanf("%d", &n);
    for(int i=0;i<n;i++) {
        max=0;
        for(int j=0;j<5;j++) {
            scanf("%d", &t);
            if(t>max) max=t;
        }
        printf("Case #%d: %d\n", i+1, max);
    }
}