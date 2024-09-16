#include <stdio.h>
#include <stdlib.h>

int a[3000][2], f[2][3000], find=0;

int compare(const void* a, const void* b) {
    return (*(int(*)[2])a)[0]-(*(int(*)[2])b)[0];
}

int main() {
    int k, l, aind, bind, t, tt, mini;
    scanf("%d %d", &k, &l);
    scanf("%d", &aind);
    for(int i=0;i<aind;i++) {
        scanf("%d:%d", &t, &tt);
        a[i][0]=t*60+tt;
        a[i][1]=0;
    }
    scanf("%d", &bind);
    for(int i=0;i<bind;i++) {
        scanf("%d:%d", &t, &tt);
        a[i+aind][0]=t*60+tt;
        a[i+aind][1]=1;
    }
    qsort(a, aind+bind, sizeof(a[0]), compare);
    for(int i=0;i<aind+bind;i++) {
        mini=-1;
        for(int j=0;j<find;j++) {
            if(f[0][j]<=a[i][0]&&f[1][j]==a[i][1]) {
                mini=j;
                break;
            }
        }
        if(mini==-1) {
            f[0][find]=a[i][0]+k+l;
            f[1][find++]=!a[i][1];
        }
        else {
            f[0][mini]=a[i][0]+k+l;
            f[1][mini]=!a[i][1];
        } 
    }
    printf("%d", find);
}