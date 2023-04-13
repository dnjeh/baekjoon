#include <stdio.h>
int main() {
    int n, x1, y1, x2, y2, i, mx, my, f=0;
    char tra, t1, t2, a[3];
    scanf("%c%d%c%c%d%c%d", &t1, &y1, &tra, &t2, &y2, &tra, &n);
    x1=t1-65+1;
    x2=t2-65+1;
    for(i=0;i<n;i++, f=0) {
        mx=my=0;
        scanf("%s", a);
        if(a[0]=='R') {
            mx=1;
            if(a[1]=='T') my=1;
            else if(a[1]=='B') my=-1;
        }
        else if(a[0]=='L') {
            mx=-1;
            if(a[1]=='T') my=1;
            else if(a[1]=='B') my=-1;
        }
        else if(a[0]=='B') my=-1;
        else my=1;
        if(mx+x1<=8&&mx+x1>0&&my+y1<=8&&my+y1>0) {
            if(mx+x1==x2&&my+y1==y2) {
                if(mx+x2<=8&&mx+x2>0&&my+y2<=8&&my+y2>0) f=1;
            }
            else f=1;
        }
        if(f) {
            x1+=mx; y1+=my;
            if(x1==x2&&y1==y2) {
                x2+=mx; y2+=my;
            }
        }
    }
    printf("%c%d\n%c%d", x1+64, y1, x2+64, y2);
}