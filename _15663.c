#include <stdio.h>
int t[10001], a[8], b[8], n, m, ind, tocnt;
void back(int cnt) {
    int _t, tcnt=0, mem[10001]={0, };
    if(cnt==m) {
        for(int i=0;i<m;i++) {
            printf("%d%c", b[i], i+1<m?' ':'\n');
        }
    }
    else for(int i=0;tcnt<tocnt;i++) {
        if(a[i%ind]&&!mem[a[i%ind]]) {
            mem[a[i%ind]]=1;
            tcnt++;
            b[cnt]=_t=a[i%ind];
            a[i%ind]=0;
            back(cnt+1);
            a[i%ind]=_t;
        }
    }
}
int main() {
    int it, i;
    scanf("%d %d", &n, &m);
    for(i=0;i<n;i++) {
        scanf("%d", &it);	
        t[it]++;
    } 
    for(i=1;i<=10000;i++) {
        if(t[i]) { 
            if(!ind||a[ind-1]!=i) tocnt++;
            a[ind++]=i; 
            t[i]--; 
            i--;
        }
    }
    back(0);
    return 0;
} 