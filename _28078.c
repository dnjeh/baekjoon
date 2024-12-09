#include <stdio.h>
#include <string.h>
#define SIZ 500100
int a[SIZ], sta=1, end, siz, bcnt, wcnt, dir; 
int fun(int t) {
    return (t+SIZ)%SIZ;
}
void rot(int t) {
    dir=(dir+t+4)%4;
}
void spush(int t) {
    if(!t) {
        a[sta]=0;
        sta=fun(sta+1);
        wcnt++;
        siz++;
    }
    else if(a[fun(sta-1)]) {
        a[fun(sta-1)]+=t;
        bcnt+=t;
    }
    else {
        a[sta]=t;
        sta=fun(sta+1);
        bcnt+=t;
        siz++;
    }
}
void epush(int t) {
    if(!t) {
        a[end]=0;
        end=fun(end-1);
        wcnt++;
        siz++;
    }
    else if(a[fun(end+1)]) {
        a[fun(end+1)]+=t;
        bcnt+=t;
    }
    else {
        a[end]=t;
        end=fun(end-1);
        bcnt+=t;
        siz++;
    }
}
int spop(int t) {
    if(!siz) return -1;
    else {
        int ret=a[fun(sta-1)];
        if(!ret) wcnt--;
        else if(t&&ret>1) {
            bcnt--;
            a[fun(sta)]--;
            ret=1;
            return ret;
        }
        else bcnt-=ret;
        siz--;
        sta=fun(sta-1);
        return ret;
    }
}
int epop() {
    if(!siz) return -1;
    else {
        int ret=a[fun(end+1)];
        if(!ret) wcnt--;
        else bcnt-=ret;
        siz--;
        end=fun(end+1);
        return ret;
    }
}
int main() {
    char t[10], tt;
    int q;
    scanf("%d", &q);
    for(int i=0;i<q;i++) {
        //printf("%d %d\n", end, sta);
        scanf(" %s", t);
        if(strcmp(t, "pop")) {
            scanf(" %c", &tt);
            if(t[1]=='u') {
                if(tt=='b'&&dir!=3&&(dir!=1||wcnt)) epush(1);
                else if(tt=='w') epush(0);
            }
            else if(t[0]=='r') {
                if(tt=='l') rot(-1);
                else rot(1);
                if(dir==1) {
                    int it=spop(0);
                    if(!it) spush(0);
                }
                else if(dir==3) {
                    int it=epop();
                    if(!it) epush(0); 
                }
            }
            else if(t[0]=='c') {
                if(tt=='b') printf("%d\n", bcnt);
                else printf("%d\n", wcnt);
            }
        }
        else {
            int it=spop(1);
            if(!it&&dir==1) {
                for(it=spop(0);it>0;it=spop(0)) { }
                if(!it) spush(0);
            }
            else if(it>1) {
                spush(it-1);
            }
        }
    }
    return 0;
}
