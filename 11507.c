#include <stdio.h>
int main() {
    int a[4][14]={{0, }, }, it, f=0, i, j, tsum;
    char t;
    for(scanf("%c", &t);t!='\n';scanf("%c", &t)) {
        scanf("%2d", &it);
        switch(t) {
        case 'P': t=0; break;
        case 'K': t=1; break;
        case 'H': t=2; break;
        case 'T': t=3; break;
        default: break;
        }
        if(a[t][it]) f=1;
        else a[t][it]=1;
    }
    if(f) {
        printf("GRESKA");
        return 0;
    }
    for(i=0;i<4;i++) {
        tsum=0;
        for(j=1;j<=13;j++) if(a[i][j]) tsum++;
        printf("%d ", 13-tsum);
    }
}