#include <stdio.h>
int a[2][20000];
int fun(char *t) {
    int ret, i;
    for(ret=i=0;t[i];ret*=26, i++) 
        ret+=(int)t[i]-65;
    return ret/26;
}
char* nuf(int t) {
    char _t;
    static char ret[5]="AAA";
    for(int i=0;i<3;t/=26, i++) {
        ret[i]=(char)(t%26+65);
    } ret[3]=0;
    _t=ret[0];
    ret[0]=ret[2];
    ret[2]=_t;
    return ret;
}
void pre();
void dfs(int t) {
    if(a[1][t]) {
        printf(" %s-", nuf(t));
        printf("%s", nuf(a[1][t]-1));
        dfs(a[1][t]-1);
    }
    else printf("\n");
}
int main() {
    int T, n;
    char t[5], tt[5];
    scanf(" %d", &T);
    for(int i=0;i<T;i++) {
        pre();
        scanf(" %d", &n);
        for(int j=0;j<n;j++) {
            scanf(" %s %s", t, tt);
            a[0][fun(t)]++; a[0][fun(tt)]--;
            a[1][fun(t)]=fun(tt)+1;
        }
        printf("Case #%d:", i+1);
        for(int j=0;j<20000;j++) {
            if(a[0][j]==1)
                dfs(j);
        }
    }
}

void pre() {
    for(int i=0;i<2;i++) {
        for(int j=0;j<20000;j++) {
            a[i][j]=0;
        }
    }
}