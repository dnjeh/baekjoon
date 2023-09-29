#include <stdio.h>
int a[100][100], key[27];
int w, h;
int main() {
    int i, T, j, k;
    char t[105];
    scanf("%d", &T);
    for(i=0;i<T;i++) {
        scanf("%d %d", &h, &w);
        for(j=0;j<h;j++) {
            scanf("%s", t);
            for(k=0;k<w;k++) {
                switch(t[k]) {
                case '*':
                    a[j][k]=0;
                    break;
                case '.':
                    a[j][k]=-30;
                    break;
                case '$':
                    a[j][k]=30;
                default:
                    if(t[k]>=96) a[j][k]=t[k]-96;
                    else a[j][k]=-(t[k]-64);
                    break;
                }
            }
        }
        scanf("%s", t);
        for(j=1;j<=26;j++) {
            key[j]=0;
        }
        for(j=0;t[j];j++) {
            if(t[j]=='0') break;
            else key[t[j]-96]=-1;
        }
    }
}