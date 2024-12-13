#include <stdio.h>
void set(int* a, int n);
void swap(int *a, int *b) {
    int t=*a;
    *a=*b;
    *b=t;
}
void swp(int *a, int t, int tt) {
    int b[100];
    for(int i=0;i<tt;i++) { b[i]=a[t+i]; }
    for(int i=0;i<t+tt;i++) {
        swap(&a[i], &b[i%tt]);
    } 
}
int main() {
    int a[100];
    int T, m, c, w, t, tt;
    scanf("%d", &T);
    for(int i=0;i<T;i++) {
        scanf("%d %d %d", &m, &c, &w);
        w--;
        set(a, m);
        for(int j=0;j<c;j++) {
            scanf("%d %d", &t, &tt);
            t--;
            swp(a, t, tt);
        }
        printf("Case #%d: %d\n", i+1, a[w]);
    }
}

void set(int* a, int n) {
    for(int i=0;i<n;i++) {
        a[i]=i+1;
    }
}