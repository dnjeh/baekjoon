#include <stdio.h>

int main() {
    int maxy[10]={0, }, maxx[10]={0, }, n, m, T, a[10][10]={{0, }, };
    int f;
    scanf("%d", &T);
    for(int k=0;k<T;k++) {
        
        for(int i=0;i<10;i++) {
            maxx[i]=0;
            maxy[i]=0;
        }
        
        scanf("%d %d", &n, &m);
        for(int i=0;i<n;i++) {
            for(int j=0;j<m;j++) {
                scanf("%d", &a[i][j]);
                if(maxy[i]<a[i][j]) maxy[i]=a[i][j];
                if(maxx[j]<a[i][j]) maxx[j]=a[i][j];
            }
        }
        f=0;
        for(int i=0;i<n&&!f;i++) {
            for(int j=0;j<m&&!f;j++) {
                if(a[i][j]<(maxy[i]<maxx[j]?maxy[i]:maxx[j])) {
                    f=1;
                }
            }
        }
        printf("Case #%d: %s\n", k+1, f?"NO":"YES");
    }
    return 0;
}
