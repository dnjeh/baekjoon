#include <stdio.h>
int a[50][50], n, l, vis[50][50];
void set();
int main() {
    int i, j, d, f=0;
    scanf("%d %d %d", &n, &l, &r);
    for(i=0;i<n;i++) {
        for(j=0;j<n;j++) {
            scanf("%d", &a[i][j]);
        }
    }
    for(d=0;!f;d++) {
        int ind=0;
        for(i=0;i<n;i++) {
            for(j=0;j<n;j++) {
                if()
            }
        }
    }
}

void set() {
    for(int i=0;i<n;i++) for(int j=0;j<n;j++) {
        vis[i][j]=0;
    }
}