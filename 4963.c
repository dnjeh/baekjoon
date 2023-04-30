#include <stdio.h>
int a[50][50], h, w;
void find(int x, int y) {
    if(!a[y][x]) return;
    a[y][x]=0;
    for(int i=-1;i<2;i++) {
        for(int j=-1;j<2;j++) {
            if(!(i||j)) continue;
            if((x+j)>0&&(y+i)>0&&(x+j)<w&&(y+i)<h) find(x+j, y+i);
        }
    }
}
int main() {
    int i, j, cnt=0;
    scanf("%d %d", &w, &h);
    if(!(w||h)) return 0;
    for(i=0;i<h;i++) for(j=0;j<w;j++) scanf("%d", &a[i][j]);
    for(i=0;i<h;i++) {
        for(j=0;j<w;j++) {
            if(a[i][j]) find(j, i);
            cnt++;
        }
    }
    printf("%d\n", cnt);
    main();
}