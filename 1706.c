#include <stdio.h>
#include <string.h>
int main() {
    int n, m, i, j, f=1, I;
char t[21], min[21];
    scanf("%d %d", &n, &m);
    char a[n+1][m+1];
    for(i=0;i<=m;i++) a[n][i]=0;
    for(i=0;i<n;i++) scanf("%s", a[i]);
    for(i=0;i<n;i++) {
        for(I=j=0;j<m;j++) {
            if(a[i][j]!='#') t[I++]=a[i][j];
            else if(I>1) {
                t[I]=0;
                if(f||strcmp(t, min)<0) {
                    strcpy(min, t);
                    f=0;
                }
                I=0;
            }
            else I=0;
        }
        if(I>1) {
            t[I]=0;
            if(f||strcmp(t, min)<0) {
                strcpy(min, t);
                f=0;
            }
            I=0;
        }
    }
    for(i=0;i<m;i++) {
        for(I=j=0;j<n;j++) {
            if(a[j][i]!='#') t[I++]=a[j][i];
            else if(I>1) {
                t[I]=0;
                if(f||strcmp(t, min)<0) {
                    strcpy(min, t);
                    f=0;
                }
                I=0;
            }
            else I=0;
        }
        if(I>1) {
            t[I]=0;
            if(f||strcmp(t, min)<0) {
                strcpy(min, t);
                f=0;
            }
            I=0;
        }
    }
    printf(min);
}