#include <stdio.h>
int a[6], b[2][6], c[12]={8, };
int n, w, t, k, cnt=0;

void exe() {
    int tcnt=0;
    for(int i=0;i<n;i++) {
        b[0][i]=a[i];
    }
    for(int now=1;now<=t;now++) {
        for(int i=0;i<n;i++) {
            tcnt=0;
            if(i-1>=0&&b[(now+1)%2][i-1]) tcnt++;
            if(i+1<n&&b[(now+1)%2][i+1]) tcnt++;
            if(c[now-1]==i) tcnt=3;
            b[now%2][i]=b[(now+1)%2][i]-3+tcnt;
            if(b[now%2][i]<0) b[now%2][i]=0;
        }
    }
    tcnt=0;
    for(int i=0;i<n;i++) {
        if(b[t%2][i]) tcnt++;
    }
    if(tcnt>=k) cnt++;
}

void bak(int now, int pre) {
    if(now>=t) {
        exe();
    }
    else {
        if(pre-1>=0) {
            c[now]=pre-1;
            bak(now+1, pre-1);
        }
        c[now]=pre;
        bak(now+1, pre);
        if(pre+1<n) {
            c[now]=pre+1;
            bak(now+1, pre+1);
        }
    }
}
int main() {
    scanf("%d %d %d %d", &n, &w, &t, &k);
    for(int i=0;i<n;i++) {
        scanf("%d", &a[i]);
    }
    bak(1, w);
    printf("%d", cnt);
}