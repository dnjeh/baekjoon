#include <stdio.h>

int main() {
    int a[2]={0, 0}, aind=0, f=0, abs=1, ff=0;
    char t[200];
    scanf("%s", t);
    for(int i=0;t[i];i++) {
        if(t[i]=='-') abs*=-1;
        else if(t[i]=='x') {
            if(a[aind]==0) a[aind]=1;
            a[aind]*=abs;
            aind++;
            abs=1;
            f=1;
        }
        else if(t[i]!='+') {
            a[aind]=a[aind]*10+(t[i]-48);
        }
    }
    a[aind]*=abs;
    if(f==1) {
        if(a[0]/2==-1) printf("-");
        else if(a[0]/2!=1) printf("%d", a[0]/2);
        printf("xx");
        ff=1;
    }
    if(f==0&&a[aind]||aind==1&&a[aind]) {
        if(ff&&a[aind]>=0) printf("+");
        if(a[aind]==-1) printf("-");
        else if(a[aind]!=1) printf("%d", a[aind]);
        printf("x");
        ff=1;
    }
    if(ff) printf("+");
    printf("W");
    return 0;
}
