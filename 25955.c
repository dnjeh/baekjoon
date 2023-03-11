#include <stdio.h>
int main() {
    int n, i, j, key, c[2]={-1, -1};
    char t;
    scanf("%d", &n);
    int a[n], b[n];
    getchar();
    for(i=0;i<n;i++) {
        scanf("%c%d", &t, &a[i]);
        getchar();
        switch(t) {
        case 'B': a[i]+=40000; break;
        case 'S': a[i]+=30000; break;
        case 'G': a[i]+=20000; break;
        case 'P': a[i]+=10000; break;
        case 'D': a[i]+=0; break;
        default: break;
        }
        b[i]=a[i];
    }
    for(i=1;i<n;i++) {
        key=a[i];
        for(j=i-1;j>=0&&a[j]<key;j--) {
            a[j+1]=a[j];
        }
        a[j+1]=key;
    }
    for(i=0;i<n;i++) {
        if(a[i]!=b[i]) {
            if(c[0]==-1) c[0]=a[i];
            else if(c[1]==-1) c[1]=a[i];
            else break;
        }
    }
    if(c[0]==-1) printf("OK");
    else printf("KO\n%c%d %c%d", c[0]>10000?c[0]>20000?c[0]>30000?c[0]>40000?'B':'S':'G':'P':'D', c[0]%10000, c[1]>10000?c[1]>20000?c[1]>30000?c[1]>40000?'B':'S':'G':'P':'D', c[1]%10000);
}