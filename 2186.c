#include <stdio.h>
#include <string.h>
int n, m, k;
char a[100][101];
int mem[80][100][100];
int dfs(int y, int x, int now, char* b) {
    int ret=0, *_mem=&mem[now][y][x];
    if(*_mem!=-1) ret=*_mem;
    else if(a[y][x]==b[now]) {
        for(int _m=1;_m<=k;_m++) {
            for(int i=0;i<4;i++) {
                int dy=(i%2?(i/2?-1:1):0)*_m+y, dx=(i%2?0:(i/2?1:-1))*_m+x;
                if(dy>=0&&dy<n&&dx>=0&&dx<m&&a[dy][dx]==b[now+1]) ret+=dfs(dy, dx, now+1, b); 
            }
        }
        *_mem=ret;
    }
    return ret;
}
void set(char *b);
int main() {
    int ans=0;
    char b[85];
    scanf("%d %d %d", &n, &m, &k);
    for(int i=0;i<n;i++) {
        scanf("%s", a[i]);
    }
    scanf("%s", b);
    set(b);
    for(int i=0;i<n;i++) {
        for(int j=0;j<m;j++) {
            ans+=dfs(i, j, 0, b);
        }
    }
    printf("%d", ans);
}
void set(char *b) {
    int _n=strlen(b);
    char t=b[_n-1];
    for(int i=0;i<n;i++) {
        for(int j=0;j<m;j++) {
            for(int k=0;k<_n;k++) {
                int *_mem=&mem[k][i][j];
                if(k!=_n-1) *_mem=-1;
                else if(a[i][j]==t) *_mem=1;
                else *_mem=0;
            }
        }
    }
}