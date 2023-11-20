#include <stdio.h>
#include <string.h>
char max[11], min[11], a[11];
int vis[10], cmp[9], cind;
int k;
void back(int cnt, char pre) {
    int i;
    if(cnt>k) {
        if(!max[0]||strcmp(max, a)<0) strcpy(max, a);
        if(!min[0]||strcmp(max, a)>0) strcpy(min, a);
    }
    else for(i=0;i<10;i++) {
        if(!vis[i]&&(!cnt||(cmp[cnt-1]?(pre>i):(pre<i)))) {
            vis[i]=1;
            a[cnt]=48+i;
            back(cnt+1, i);
            vis[i]=0;
        }   
    }
}
int main() {
    int i;
    char t[30];
    scanf("%d\n", &k);
    fgets(t, 25, stdin);
    for(i=0;t[i]&&t[i]!='\n';i++) {
        if(t[i]=='<') {
            cmp[cind++]=0;
        }
        else if(t[i]=='>') {
            cmp[cind++]=1;
        }
    }
    back(0, 0);
    printf("%s\n%s", max, min);
}