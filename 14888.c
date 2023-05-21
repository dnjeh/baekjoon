#include <stdio.h>
int n, fi, fa, max, min;
int a[11], b[4], tb[4];
void cal(int lis, int clic, int cnt) {
    if(cnt>=n) {
        if(!fa||max<lis) {
            max=lis;
            fa=1;
        }
        if(!fi||min>lis) {
            min=lis;
            fi=1;
        }
    }
    switch(clic) {
    case -1: return;
    case 0: lis+=a[cnt]; break;
    case 1: lis-=a[cnt]; break;
    case 2: lis*=a[cnt]; break;
    case 3: lis/=a[cnt]; break;
    }
    for(int i=0;i<4;i++) {
        if(b[i]) {
            b[i]--;
            cal(lis, i, cnt+1);
            b[i]++;
        }
    }
    cal(lis, -1, cnt+1);
}
int main() {
    int i;
    scanf("%d", &n);
    for(i=0;i<n;i++) {
        scanf("%d", &a[i]);
    }
    for(i=0;i<4;i++) {
        scanf("%d", &b[i]);
    }
    cal(0, 0, 0);
    printf("%d\n%d", max, min);
}