#include <stdio.h>
int vis[15][15], q[1000][2], ind;
int a[15][15], b[15][15], temp[3][2], n, m, d, now[3];
void set();
void qput(int y, int x) {
    q[ind][0]=y;
    q[ind++][1]=x;
}
int chk(int y, int x, int dy) {
    if(y+dy<n&&x<m&&y<d&&!vis[y+dy][x]) return 1;
    else return 0;
}
int bfs(int dy, int dx) {
    int i, j, x, y, f=0; ind=0;
    for(i=0;i<n;i++) for(j=0;j<m;j++) vis[i][j]=0;
    qput(0, 0);
    for(i=0;i<ind;i++) {
        y=q[i][0], x=q[i][1];
        if(a[y+dy][x+dx]&&!b[y+dy][x+dx]) {
            f=1;
            break;
        }
        if(chk(y, x-1+dx, dy)) { qput(y, x-1); vis[y+dy][x+dx]=1; }
        if(chk(y+1, x+dx, dy)) { qput(y+1, x); vis[y+dy][x+dx]=1; }
        if(chk(y, x+1+dx, dy)) { qput(y, x+1); vis[y+dy][x+dx]=1; }
    }
    return f?((y+dy)*100+x+dx):-1;
}
int deff() {
    int i, j, ret=0, t;
    for(i=0;i<n;i++) { //각 줄마다 반복하고
        for(j=0;j<3;j++) { 
            t=bfs(i, now[j]); //무슨 적을 쏴야할 지!
            temp[j][0]=t/100;   
            temp[j][1]=t%100;   
            printf("%d %d\n", temp[j][0], temp[j][1]);
        }
        for(j=0;j<3;j++) {
            if(temp[j][1]!=-1&&!b[temp[j][0]][temp[j][1]]) {
                b[temp[j][0]][temp[j][1]]=1;
                ret++;
            }
        }
    }
    printf("\n");
    return ret;
}
int main() {
    int i, j, k, t, max;
    scanf("%d %d %d", &n, &m, &d);
    for(i=n-1;i>=0;i--) { //편의상, 상하반전을 하여 입력받는다.
        for(j=0;j<m;j++) {
            scanf("%d", &a[i][j]); 
        }
    }
    for(i=0;i<n;i++) {
        now[0]=i;
        for(j=i+1;j<n;j++) {
            now[1]=j;
            for(k=j+1;k<n;k++) {
                now[2]=k; //유사 백트래킹. 
                set();
                t=deff(); //시뮬레이션 결과를 t에 저장한다.
                if(k==2||t>max) max=t; 
            }
        }
    }
    printf("%d", max); 
}
void set() {
    int i, j;
    for(i=0;i<n;i++) {
        for(j=0;j<m;j++) b[i][j]=0;
    }
}