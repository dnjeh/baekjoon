#include <stdio.h>
#define MAX 1000
int a[55], alen;
void pre() {
    for(int i=1;i*(i+1)/2<=MAX;i++) {
        a[alen++]=i*(i+1)/2;
    }
}
int main() {
    int n, T, f;
    pre();
    scanf("%d", &T);
    for(int i=0;i<T;i++) {
        f=0;
        scanf("%d", &n);   
        for(int i=0;i<alen&&!f;i++) {
            for(int j=0;j<alen&&!f;j++) {
                for(int k=0;k<alen&&!f;k++) {
                    if(a[i]+a[j]+a[k]==n) f=1;
                }
            }
        }
        printf("%d\n", f);
    }
}