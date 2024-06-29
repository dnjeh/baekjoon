#include <stdio.h>
int a[1000];
int mini(int n) {
    int min, mini;
    for(int i=0;i<n;i++) {
        if(!i||min>a[i]) {
            min=a[i];
            mini=i;
        }
    }
    return mini;
}
int main() {
    int n, c, t, tt;
    scanf("%d %d", &n, &c);
    for(int i=0;i<c;i++) {
        t=mini(n); 
        scanf("%d", &tt);
        printf("%d ", t+1);
        a[t]+=tt;
    }
}