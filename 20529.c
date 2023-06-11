#include <stdio.h>
int iXOR(int t, int tt) {
    int a=t^tt, ret=0;
    for(;a;a>>=1) {
        if(a&1) ret++;
    }
    return ret;
}
int main() {
    int T, n, i, j, k, kk, kkk;
    char t[5];
    scanf("%d", &T);
    for(i=0;i<T;i++) {
        int it[16]={0, }, tt=0, ttt, min=-1;
        scanf("%d", &n);
        for(j=0;j<n;j++, tt=0) {
            scanf("%s", t);
            if(t[0]=='E') tt+=8;
            if(t[1]=='S') tt+=4;
            if(t[2]=='T') tt+=2;
            if(t[3]=='J') tt+=1;
            it[tt]++;
        }
        if(n>=48) {
            printf("0\n");
            continue;
        }
        else for(k=0;k<16;k++) { 
            if(it[k]) it[k]--;
            else continue;
            for(kk=k;kk<16;kk++) {
                if(it[kk]) it[kk]--;
                else continue;
                for(kkk=kk;kkk<16;kkk++) {
                    if(it[kkk]) {
                        ttt=iXOR(k,kk)+iXOR(kk,kkk)+iXOR(k,kkk);
                        if(min==-1||min>ttt) min=ttt;
                    }
                }
                it[kk]++;
            }
            it[k]++;
        }
        printf("%d\n", min);
    }
}
