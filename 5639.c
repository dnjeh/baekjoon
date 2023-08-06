#include <stdio.h>
int tre[1000000][2], ind, rot;
void iput(int t, int now) {   
    if(t<now) {
        if(!tre[now][0]) tre[now][0]=t;
        else iput(t, tre[now][0]);
    }
    else {
        if(!tre[now][1]) tre[now][1]=t;
        else iput(t, tre[now][1]);
    }
}
void pos(int now) {
    if(tre[now][0]) pos(tre[now][0]);
    if(tre[now][1]) pos(tre[now][1]);
    printf("%d\n", now);
}
int main() {
    int i, t;
    for(i=0;scanf("%d", &t)!=EOF;i++) {
        if(!i) rot=t;
        else iput(t, rot);
    }
    pos(rot);
}