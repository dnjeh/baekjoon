#include <stdio.h>
int main() {
    int T, i, t, j, k, n[2], max[2];
    scanf("%d", &T);
    for(i=0;i<T;i++) {
        max[0]=max[1]=0;
        scanf("%d %d", &n[0], &n[1]);
        for(j=0;j<2;j++) {
            for(k=0;k<n[j];k++) {
                scanf("%d", &t);
                if(t>max[j]) max[j]=t;
            }
        }
        printf(max[0]>=max[1]?"S\n":"B\n");
    }
}