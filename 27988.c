#include <stdio.h>
#include <stdlib.h>
int compare(const void* a, const void* b) {
    long long int t=(*(int(*)[4])a)[0]-(*(int(*)[4])b)[0];
    long long int tt=(*(int(*)[4])a)[1]-(*(int(*)[4])b)[1];
    if(t<0LL) return -1;
    else if(t>0LL) return 1;
    else if(tt<0LL) return -1;
    else if(tt>0LL) return 1;
    else return 0;
}
int a[1000000][4];
int main() {
    char t;
    int n, it, itt;
    scanf("%d", &n);
    for(int i=0;i<3;i++) {
        for(int j=0;j<n;j++) {
            if(i!=2) scanf("%d", &a[j][i]);
            else {
                scanf(" %c", &t);
                if(t=='Y') a[j][i]=1;
                else if(t=='B') a[j][i]=2;
            }
        }
    }
    for(int i=0;i<n;i++) {
        it=a[i][0]; itt=a[i][1];
        a[i][0]=it-itt;
        a[i][1]=it+itt;
        a[i][3]=i+1;
    }
    qsort(a, n, sizeof(a[0]), compare);
    int col, prei=-1, pree=-2100000000;
    for(int i=0;i<n;i++) {
        int nows=a[i][0], nowe=a[i][1], nowc=a[i][2], nowi=a[i][3];
        if(nows>pree) {
            col=nowc;
            prei=nowi;
            pree=nowe;
        }
        else {
            if(nowc!=col) {
                printf("YES\n%d %d", prei, nowi);
                return 0;
            }
            if(nowe>pree) {
                pree=nowe; prei=nowi;
            }
        }
    }
    printf("NO");
}