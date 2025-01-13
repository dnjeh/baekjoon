#include <stdio.h>
#define INF 10281028
int w[50][50];
int n;
void flod() {
    int i, j, k;
    for(k=0;k<n;k++) for(i=0;i<n;i++) for(j=0;j<n;j++) {
        if(w[i][j]>w[i][k]+w[k][j]) {
            w[i][j]=w[i][k]+w[k][j];
        }
    }
}
int main() {
    int i, j, d, ans=0;
    char t[55];
    scanf("%d %d\n", &n, &d);
    for(i=0;i<n;i++) {
        scanf("%s", t);
        for(int j=0;j<n;j++) {
            if(t[j]=='Y') {
                w[i][j]=1;
            }
            else if(i!=j) {
                w[i][j]=INF;
            }
        }
    }
    flod();
    for(i=0;i<n;i++) {
        for(j=0;j<n;j++) {
            if(ans<w[i][j]) ans=w[i][j];
        }
    }
    printf("%d", ans==INF?-1:ans*d);
}