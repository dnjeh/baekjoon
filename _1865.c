#include <stdio.h>
int T, n, m, w, a[500][500];
int aput(int t, int tt, int ttt) {

}
void set();
int main() {
    int k, i, j, t, tt, ttt;
    scanf("%d", &T);
    for(k=0;k<T;k++) {
        set();
        scanf("%d %d %d", &n, &m, &w);
        for(i=0;i<m;i++) {
            scanf("%d %d %d", &t, &tt, &ttt);
            t--; tt--;
            aput(t, tt, ttt); 
            aput(tt, t, ttt); 
        }
        for(i=0;i<w;i++) {
            scanf("%d %d %d", &t, &tt, &ttt);
            t--; tt--;
            aput(t, tt, -ttt); 
        }
    }
}
void set() {
    
}