#include <stdio.h>
int vis[1024], q[1100], qind;
void qput(int t) {
    vis[t]=1;
    q[qind++]=t;
}
int main() {
    char t[11];
    int a[2];
    for(int i=0;i<2;i++) {
        int _t=0;
        scanf("%s", t);
        for(int j=0;t[j];j++) {
            _t<<=1;
            _t+=t[j]-'0';
        }
        a[i]=_t;
    }
    qput(a[0]);
    int i, ind, ans, f;
    for(i=ind=ans=f=0;ind<qind&&!f;ans++) {
        for(ind=qind;i<ind&&!f;i++) {
            int now=q[i];
            if(now==a[1]) f=1;
            else {
                if(now&&!vis[now-1]) qput(now-1);
                if(now<1023&&!vis[now+1]) qput(now+1);
                for(int j=1;j<=(now>>1);j<<=1) {
                    int _t=now^j;
                    if(!vis[_t]) qput(_t);
                }
            }
        }
    }
    printf("%d", f?ans-1:-1);
}