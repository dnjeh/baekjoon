#include <stdio.h>
int n, m, sta[2][500010], fnow, nm;
void printa() {
    int i;
    for(i=0;i<nm;i++) printf("%d", sta[fnow%2][i]);
}
void fun() {
    fnow++;
    int i, bef=!(fnow%2), now=0, min=10;
    for(i=0;sta[bef][i]!=-1;i++) {
        if(!now||!m||(sta[!bef][now-1]>=min)||sta[bef][i]<=sta[!bef][now-1]) {
            sta[!bef][now++]=sta[bef][i];
        }
        else {
            now--;
            m--;
            min=sta[!bef][now];
            sta[!bef][now++]=sta[bef][i];
        }
    }
    sta[!bef][now]=-1;
    if(!m) printa();
}
int main() {
    int i, bef;
    scanf("%d %d", &n, &m);
    for(i=0;i<n;i++) {
        scanf("%1d", &sta[0][i]);
    } nm=n-m;
    sta[0][i]=-1;
    for(;m;) {
        bef=m;
        fun();
        if(bef==m) {
            printa();
            return 0;
        }
    }
}