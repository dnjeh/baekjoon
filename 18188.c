#include <stdio.h>
int a[20][20], q[4][1100000], b[23], h, w, n, qind;
void qput(int y, int x, int dir, int from) {
    q[0][qind]=y;
    q[1][qind]=x;
    q[2][qind]=dir;
    q[3][qind++]=from;
}
void fun(int t) {
    if(!t) return;
    fun(q[3][t]);
    printf("%c", q[2][t]);
}
int main() {
    int dy, dx;
    char t[23], ct;
    scanf("%d %d", &h, &w);
    for(int i=0;i<h;i++) {
        scanf("%s", t);
        for(int j=0;j<w;j++) {
            switch(t[j]) {
                case '@':
                    a[i][j]=1;
                    break;
                case 'D':
                    qput(i, j, 0, -1);
                    break;
                case 'Z':
                    dy=i;
                    dx=j;
                    break;
            }
        }
    }
    scanf("%d", &n);
    for(int i=0;i<n;i++) {
        for(int j=0;j<2;j++) {
            scanf(" %c", &ct);
            switch(ct) {
                case 'W':
                    b[i]|=1<<0;
                    break;
                case 'A':
                    b[i]|=1<<1;
                    break;
                case 'S':
                    b[i]|=1<<2;
                    break;
                case 'D':
                    b[i]|=1<<3;
                    break;
            }
        }
    }
    int i, f, ind=0, cnt;
    for(cnt=i=0;ind<qind&&cnt<=n;cnt++) {
        for(ind=qind;i<ind;i++) {
            //printf("%d: %c\n, ", cnt, q[2][i]);
            int y=q[0][i], x=q[1][i];
            if(y==dy&&x==dx) {
                printf("YES\n");
                fun(i);
                return 0;
            }
            else {
                if((b[cnt]&(1<<0))&&y-1>=0&&!a[y-1][x]) qput(y-1, x, 'W', i);
                if((b[cnt]&(1<<1))&&x-1>=0&&!a[y][x-1]) qput(y, x-1, 'A', i);
                if((b[cnt]&(1<<2))&&y+1<h&&!a[y+1][x]) qput(y+1, x, 'S', i);
                if((b[cnt]&(1<<3))&&x+1<w&&!a[y][x+1]) qput(y, x+1, 'D', i);
            }
        }
    }
    printf("NO");
}
