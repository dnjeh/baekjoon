#include <stdio.h>
#include <math.h>
int y, x, ans;
void z(int siz, int i, int j) {
    int f1, f2;
    if(siz==1) return;
    for(f1=1;f1<3;f1++) for(f2=1;f2<3;f2++) {
        if((x<((i+(f2*siz)/2)))&&(y<(j+((f1*siz)/2)))) {
            z(siz/2, i+(f2-1)*siz/2, j+(f1-1)*siz/2);
            return;
        }
        else ans+=siz/2*siz/2;
    }
}
int main() {
    int n;
    scanf("%d %d %d", &n, &y, &x);
    n=(int)pow(2, n);
    z(n, 0, 0);
    printf("%d", ans);
}