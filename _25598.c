#include <stdio.h>
int a[25][25], n, z[5][700], zind, py, px;
int mov2int(char t) {
    int ret=0;
    switch(t) {
    case 'S': ret++;
    case 'L': ret++;
    case 'R': ret++;
    case 'D': ret++;
    default:
        break;
    }
    return ret;
}
int mov_all(int y, int x, int _dir, int siz) {
    
}
void mov_ply(int _mov) {
    if(_mov==4) return;
    int t=mov_all(py, px, _mov, 1);
    py=t/100;
    px=t%100;
}
int main() {
    int w, t, tt, d, f;
    char ct;
    char _mov[10010];
    scanf("%d", &n);
    scanf("%s", _mov+1);
    scanf("%d %d", &py, &px);
    py--; px--;
    scanf("%d", &w);
    for(int i=0;i<w;i++) {
        scanf("%d %d", &t, &tt);
        t--; tt--;
        a[t][tt]=-1;
    }
    scanf("%d", zind);
    for(int i=0;i<zind;i++) {
        for(int j=0;j<5;j++) {
            if(j-3) scanf("%d", &z[j][i]);
            else {
                scanf("%c", ct);
                z[j][i]=mov2int(ct);
            }
        }
    }
    scanf("%d", &d);

    f=0;
    for(int i=1;_mov[i]&&!f;i++) {
        mov_ply(mov2int(_mov[i]));
        mov_zom();
        if(a[py][px]==i) f=1;
    }
    if(f) printf("DEAD...");
    else printf("ALIVE!");
}