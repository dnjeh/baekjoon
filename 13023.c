#include <stdio.h>
int sta[2010][2010], sind[2010], vis[2010], f;
int n, k;
void sput(int t, int tt) {
    sta[t][sind[t]]=tt;
    sind[t]++;
}
void back(int cnt, int t) {
    int i;
    if(cnt>=5) {
        f=1;
        return;
    }
    else {
        for(i=0;i<sind[t]&&!f;i++) {
            if(!vis[sta[t][i]]) {
                vis[sta[t][i]]=1;
                back(cnt+1, sta[t][i]);
                vis[sta[t][i]]=0;
            }
        }
    }
}   
int main() {
    int i, j, t, tt;
    scanf("%d %d", &n, &k);
    for(i=0;i<k;i++) {
        scanf("%d %d", &t, &tt);
        sput(t, tt);
        sput(tt, t);    
    }
    for(i=0;i<n&&!f;i++) {
        vis[i]=1;
        back(1, i);
        vis[i]=0;
    }
    printf("%d", f);
}