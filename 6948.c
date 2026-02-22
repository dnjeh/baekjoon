#include <stdio.h>
int a[26][53];
void dfs(int prf, int now, long long int* f) {
    if(((*f)&(((long long int)1)<<(long long int)(now+26)))!=0) return;
    *f|=((long long int)1)<<(long long int)(now+26);
    for(int i=0;i<26;i++) {
        if(a[now][i]) dfs(0, i, f);
    }
    for(int i=26;i<52;i++) {
        if(a[now][i]) {
            *f|=((long long int)1)<<(long long int)(i-26);
        }
    }
    if(prf) {
        int _f=0;
        for(int i=0;i<26;i++) {
            if(((*f)>>i)&1) {
                if(_f) printf(",");
                printf("%c", (char)(i+'a'));
                _f=1;
            }
        }
    }
}
int main() {
    char t[2], tt[10], ttt[2];
    int n;
    scanf("%d", &n);
    for(int i=0;i<n;i++) {
        scanf(" %s %s %s", t, tt, ttt);
        a[t[0]-'A'][ttt[0]<='Z'?ttt[0]-'A':ttt[0]-'a'+26]=1;
        a[t[0]-'A'][52]=1;
        if(ttt[0]<='Z') a[ttt[0]-'A'][52]=1;
    }
    for(int i=0;i<26;i++) {
        if(a[i][52]) {
            long long int f=0;
            printf("%c = {", i+'A');
            dfs(1, i, &f);
            printf("}\n");
        }
    }
}