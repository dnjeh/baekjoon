#include <stdio.h>
int a[2][2500], b[30], n, ans, aind, q[2500];
int max(int a, int b) {
    return a>b?a:b;
}
int abs(int t) {
    return t<0?t*-1:t;
}
int fun(int y, int x) {
    int ret=0, t;
    y-=n/2; x-=n/2;
    ret+=b[t=max(abs(y), abs(x))];
    int tt=(b[t+1]-b[t])/4;
    if(y==-t) {
        ret+=tt*3;
        ret+=-x+t;
    }
    else if(x==t) {
        ret+=tt*2;
        ret+=-y+t;
    }
    else if(y==t) {
        ret+=tt;
        ret+=x+t;
    }
    else {
        ret+=y+t;
    }
    return ret;
}
void printa(int t) {
    printf("----------\n");
    for(int i=0;i<n;i++) {
        for(int j=0;j<n;j++) {
            printf("%d ", a[t][fun(i, j)]);
        }
        printf("\n");
    }
}
void fun2(int d, int s) {
    int y=n/2, x=n/2; d--;
    for(int i=1;i<=s;i++) {
        int dy=(d/2?0:(d%2?1:-1))*i, dx=(d/2?(d%2?1:-1):0)*i;
        a[aind%2][fun(y+dy, x+dx)]=0;
    }
}
void fun3() {
    int _ind=1, pre=0, qind=0;
    for(int i=0;i<n*n;i++) a[!(aind%2)][i]=0;
    int f=0;
    for(;!f;) {
        f=1;
        qind=0;
        for(int i=0;i<n*n;i++) {
            int this=a[aind%2][i];
            if(this) {
                if(pre!=this&&qind>=4) {
                    f=0;
                    for(int j=0;j<qind;j++) {
                        //printf("%d\n", ans);
                        ans+=a[aind%2][q[j]];
                        a[aind%2][q[j]]=0;
                    }
                }
                if(!pre||pre!=this) {
                    qind=0;
                    pre=this;
                    q[qind++]=i;
                }
                else {
                    q[qind++]=i;
                }
            }
        }
        if(qind>=4) {
            f=0;
            for(int j=0;j<qind;j++) {
                //printf("%d\n", ans);
                ans+=a[aind%2][q[j]];
                a[aind%2][q[j]]=0;
            }
        }
        //printa(aind%2);
    }
    pre=qind=0;
    for(int i=0;i<n*n;i++) {
        int this=a[aind%2][i];
        if(this) {
            if(pre!=this&&qind) {
                if(_ind<n*n) a[!(aind%2)][_ind++]=qind;
                if(_ind<n*n) a[!(aind%2)][_ind++]=pre;
            }
            if(!pre||pre!=this) {
                qind=1;
                pre=this;
            }
            else {
                qind++;
            }
        }
    }
    if(qind) {
        if(_ind<n*n) a[!(aind%2)][_ind++]=qind;
        if(_ind<n*n) a[!(aind%2)][_ind++]=pre;
    }
}
void set();
int main() {
    int m, t, tt;
    scanf("%d %d", &n, &m);
    set();
    for(int i=0;i<n;i++) {
        for(int j=0;j<n;j++) {
            scanf("%d", &t);
            a[0][fun(i, j)]=t;
        }
    }
    for(aind=0;aind<m;aind++) {
        scanf("%d %d", &t, &tt);
        fun2(t, tt);
        //printa(aind%2);
        fun3();
        //printf("%d\n", ans);
        //printa(!(aind%2));
    }
    printf("%d", ans); 
}
void set() {
    for(int i=2;i<30;i++) {
        b[i]=b[i-1]+8*(i-1);
    }
}