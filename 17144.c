#include <stdio.h>
int a[2][50][50], t, r, c, now, air[2][2];
int chk(int y, int x) {
    if(y>=0&&y<r&&x>=0&&x<c&&a[now%2][y][x]!=-1) return 1;
    else return 0;
}
void po(int y, int x) {
    int cnt=0, wil=a[now%2][y][x]/5, n=(now+1)%2;
    if(chk(y-1, x)) { a[n][y-1][x]+=wil; cnt++; }
    if(chk(y+1, x)) { a[n][y+1][x]+=wil; cnt++; }
    if(chk(y, x-1)) { a[n][y][x-1]+=wil; cnt++; }
    if(chk(y, x+1)) { a[n][y][x+1]+=wil; cnt++; }
    a[n][y][x]+=a[now%2][y][x]-cnt*wil;
}
void push(int tt) {
    int y=air[tt][0], nx=0, ny, bx=0, by, n=(now+1)%2, f=0;
    for(ny=!tt?y-2:y+2, by=!tt?y-1:y+1;nx>0||ny!=y;) {
        a[n][by][bx]=a[n][ny][nx];
        bx=nx; by=ny;
        if(f==0) {
            if(tt) {
                if(ny+1>=r) f++;
                else ny++;
            } else {
                if(ny-1<0) f++;
                else ny--;
            }
        } if(f==1) {
            if(nx+1>=c) f++;
            else nx++;
        } if(f==2) {
            if(tt) {
                if(ny-1<y) f++;
                else ny--;
            } else {
                if(ny+1>y) f++;
                else ny++;
            }
        } if(f==3) nx--;
    } a[n][by][bx]=0;
}
void printa(int k) {
    int i, j;
    for(i=0;i<r;i++) {
        for(j=0;j<c;j++) {
            printf("%d ", a[k][i][j]);
        }
        printf("\n");
    }
    printf("---------\n");
}
void set();
int main() {
    int i, j, tt=0, n, ans=0;
    scanf("%d %d %d", &r, &c, &t);
    for(i=0;i<r;i++) {
        for(j=0;j<c;j++) {
            scanf("%d", &a[now][i][j]);
            if(a[now][i][j]<0) {
                air[tt][0]=i;
                air[tt++][1]=j;
            }
        }
    }
    //printf("---------\n");
    for(now=0;now<t;now++) {
        n=now%2;
        set();
        for(i=0;i<2;i++) a[(n+1)%2][air[i][0]][air[i][1]]=-1;
        for(i=0;i<r;i++) {
            for(j=0;j<c;j++) {
                if(a[n][i][j]!=-1) po(i, j);
            }
        }
        //printa(n+1);
        push(0);
        push(1);
        //printa(n+1);
    }
    for(i=0;i<r;i++) {
        for(j=0;j<c;j++) 
            if(a[now%2][i][j]>0) ans+=a[now%2][i][j];
    }
    printf("%d", ans);
}  

void set() {
    int i, j;
    for(i=0;i<r;i++) {
        for(j=0;j<c;j++) {
            a[(now+1)%2][i][j]=0;
        }
    }
}