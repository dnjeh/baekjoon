#include <stdio.h>
int a[2][1000000], n, max=0;
int bs() {
    int dwn=0, up=max, mid=(dwn+up)/2, f, t=-1, min=-1;
    for(f=0, t=-1;dwn<=up;mid=(dwn+up)/2, f=0, t=-1) {
        for(int i=0;i<2&&!f;i++) {
            for(int j=0;j<n&&!f;j++) {
                if(a[i][j]>mid&&t<0) t=a[i][j];
                else if(a[i][j]==t) t=-1;
                else if(a[i][j]>mid) f=1;
            }
            if(t>=0) f=1;
            t=-1;
        }
        if(f) dwn=mid+1;
        else {
            if(min<0||min>mid) min=mid;
            up=mid-1;
        }
    }
    return min;
}
int main() {
    scanf("%d", &n);
    for(int i=0;i<2;i++) {
        for(int j=0;j<n;j++) {
            scanf("%d", &a[i][j]);
            if(max<a[i][j]) max=a[i][j];
        }
    }
    printf("%d", bs());
    return 0;
}
