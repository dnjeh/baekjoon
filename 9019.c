#include <stdio.h>
#include <string.h>
int vis[10000], a, b, iq[10100], ind, lim;
char cq[10100][11000];
void clear() {
    for(int i=0;i<10000;i++) { 
        vis[i]=0;
    }
}
int main() {
    int i, T, j, t;
    scanf("%d", &T);
    for(i=0;i<T;i++) {
        clear();
        scanf("%d %d", &a, &b);
        vis[a]=1; iq[0]=a; strcpy(cq[0], "");
        ind=1;
        for(j=0;iq[j]!=b;j++) {
            if(!vis[(t=iq[j]*2%10000)]) {
                strcpy(cq[ind], cq[j]);
                strcat(cq[ind], "D");
                vis[t]=1; iq[ind++]=t;
            }
            if(!vis[(t=iq[j]?iq[j]-1:9999)]) {
                strcpy(cq[ind], cq[j]);
                strcat(cq[ind], "S");
                vis[t]=1; iq[ind++]=t;
            }
            if(!vis[(t=iq[j]*10%10000+iq[j]/1000%10)]) {
                strcpy(cq[ind], cq[j]);
                strcat(cq[ind], "L");
                vis[t]=1; iq[ind++]=t;
            }
            if(!vis[(t=iq[j]/10+iq[j]%10*1000)]) {
                strcpy(cq[ind], cq[j]);
                strcat(cq[ind], "R");
                vis[t]=1; iq[ind++]=t;
            }
        }
        printf("%s\n", cq[j]);
    }
}