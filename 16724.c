#include <stdio.h>
int id[1000][1000], q[2][1000100];
int n, m;
void set();
int find(int y, int x) {
    int ind=1, i, ret, yy, xx;
    q[0][0]=y;
    q[1][0]=x;
    for(i=0;i<ind;i++) {
        yy=q[0][i]; xx=q[1][i];
        if(id[yy][xx]!=yy*m+xx) {
            q[0][ind]=id[yy][xx]/m;
            q[1][ind++]=id[yy][xx]%m;
        }
    }
    ret=yy*m+xx;
    for(i=0;i<ind;i++) {
        yy=q[0][i]; xx=q[1][i];
        id[yy][xx]=ret;
    }
    return ret;
}
void onion(int y, int x, int yy, int xx) {
    int t1=find(y, x), t2=find(yy, xx);
    if(t1>t2) id[t1/m][t1%m]=t2;
    else id[t2/m][t2%m]=t1;
}
int main() {
    int i, j, cnt=0;
    char t[1001];
    scanf("%d %d", &n, &m);
    set();
    for(i=0;i<n;i++) {
        scanf("%s", t);
        for(j=0;j<m;j++) {
            if(t[j]=='U'&&i-1>=0) onion(i, j, i-1, j);
            if(t[j]=='D'&&i+1<n) onion(i, j, i+1, j);
            if(t[j]=='L'&&j-1>=0) onion(i, j, i, j-1);
            if(t[j]=='R'&&j+1<m) onion(i, j, i, j+1);
        }
    }
    for(i=0;i<n;i++) {
        for(j=0;j<m;j++) {
            //printf("%d ", id[i][j]);
            if(id[i][j]==i*m+j) cnt++;
        }
        //printf("\n");
    }
    printf("%d", cnt);
}
void set() {
    int i, j;
    for(i=0;i<n;i++) {
        for(j=0;j<m;j++) {
            id[i][j]=i*m+j;
        }
    }
}