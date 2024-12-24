#include <stdio.h>
int a[2][100010], q[100100], n, m;
void set();
int find(int t, int f) {
    int ind=1, i, ret, ret2=0;
    q[0]=t;
    for(i=0;i<ind;i++) {
        if(q[i]!=a[0][q[i]]) {
            q[ind++]=a[0][q[i]];
        }
    }
    ret=q[i-1];
    for(i=ind-2;i>=0;i--) {
        a[0][q[i]]=ret;
        a[1][q[i]]+=a[1][q[i+1]];
    }
    ret2=a[1][t];
    if(f) return ret2;
    else return ret;
}
int main() {
    int i, j, t1, t2, t3, t4, t5;
    char mod;
    for(scanf("%d %d", &n, &m);n||m;scanf("%d %d", &n, &m)) {
        set();   
        for(i=0;i<m;i++) {
            scanf(" %c %d %d", &mod, &t1, &t2);
            if(mod=='!') {
                scanf("%d", &t5);
                t3=find(t1, 1); t4=find(t2, 1);
                t1=find(t1, 0); t2=find(t2, 0);
                if(t1>t2) {
                    a[0][t1]=t2;
                    a[1][t1]=t5+t4-t3;
                }
                else {
                    a[0][t2]=t1;
                    a[1][t2]=t3-t5-t4;
                }
            }
            else {
                t3=find(t1, 1)-find(t2, 1);
                t1=find(t1, 0); t2=find(t2, 0);
                if(t1==t2) printf("%d\n", t3);
                else printf("UNKNOWN\n");
            }
            //for(int j=0;j<2;j++) {
            //    for(int i=1;i<=n;i++) {
            //        printf("%3d ", a[j][i]);
            //    }   
            //    printf("\n");
            //}
            //printf("-----------\n");
        }
    }
}

void set() {
    int i;
    for(i=0;i<=n;i++) {
        a[0][i]=i;
        a[1][i]=0;
    }
}
