#include <stdio.h>

int main() {
    int t, x, n, tn;
    scanf("%d %d %d", &t, &x, &n);
    for(int i=0;i<n;i++) {
        scanf("%d", &tn);
        int f=0, _t;
        for(int j=0;j<tn;j++) {
            scanf("%d", &_t);
            if(_t==x) f=1;
        }
        if(!f) {
            printf("NO");
            return 0;
        }
    }
    printf("YES");
    return 0;
}
