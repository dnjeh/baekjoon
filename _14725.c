#include <stdio.h>
#define SIZ 27
int tind;
char tri[SIZ+1][100000];
void itriput(char* t) {
    int _now=0;
    for(int i=0;t[i];i++) {
        if(!tri[t[i]-'A'][_now]) {
            tri[t[i]-'A'][_now]=++tind;
            _now=tind;
        }
        else {
            _now=tri[t[i]-'A'][_now];
        }
    }
    tri[SIZ][_now]=1;
}
void dfs(int now, int dep, int f) {
    for(int i=0;i<=SIZ;i++) {
        if(tri[i][now]) {
            if(f) {
                for(int i=0;i<dep*2;i++) {
                    printf("-");
                }
            }
            if(i==SIZ) {
                printf("\n");
            }
            else if(i+1==SIZ) {
                printf("\n");
                dfs(tri[i][now], dep+1, 1);
            }
            else {
                printf("%c", i+'A');
                dfs(tri[i][now], dep, 0);
            }
        }
    }
}
int main() {
    int n, _t;
    char t[300];
    scanf("%d", &n);
    for(int i=0;i<n;i++) {
        scanf("%d ", &_t);
        fgets(t, 300, stdin);
        for(int j=0;t[j];j++) {
            if(t[j]==' ') t[j]='[';
            if(t[j]=='\n') t[j]='\\';
        }
        itriput(t);
    }
    dfs(0, 0, 0);
}