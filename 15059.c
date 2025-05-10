#include <stdio.h>
int main() {
    int a[3], t, ans=0;
    for(int i=0;i<2;i++) {
        for(int j=0;j<3;j++) {
            scanf("%d", &t);
            if(!i) a[j]=t;
            else if(a[j]<t) ans+=t-a[j];
        }
    }
    printf("%d", ans);
}