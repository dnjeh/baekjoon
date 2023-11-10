#include <stdio.h>
int sta[6][500100], sind[6];
int n, p, cnt;
void sput(int a, int b) {
    sta[a][sind[a]++]=b;
    cnt++;
}
int main() {
    int i, t, tt, ttt;
    scanf("%d %d", &n, &p);
    for(i=0;i<n;i++) {
        scanf("%d %d", &t, &tt);
        if(sind[t]) {
            for(ttt=sta[t][sind[t]-1];ttt>tt&&sind[t];ttt=sind[t]?sta[t][sind[t]-1]:0) {
                sind[t]--;
                cnt++;
            }
        }
        sput(t, tt);
    }
    printf("%d", cnt);
}