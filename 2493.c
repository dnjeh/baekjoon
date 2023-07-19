#include <stdio.h>
int sta[500000][2], sn=-1, n;
void yum(int t, int tt) {
    sta[++sn][0]=t;
    sta[sn][1]=tt;
}

int main() {
    int t, i, pri;
    scanf("%d", &n);
    for(i=0;i<n;i++) {
        scanf("%d", &t);
        pri=0;
        while(sn>=0&&sta[sn][0]<t) {
            sn--;
        }
        if(sn==-1) yum(t, i+1);
        else {
            pri=sta[sn][1];
            yum(t, i+1);
        }
        printf("%d ", pri);
    }
}