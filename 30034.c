#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int chk(int* a, char t) {
    if(t==' ') return 1;
    if(t>='0'&&t<='9'&&a[t-'0']) return 1;
    if(t>='a'&&t<='z'&&a[t-'a'+10]) return 1;
    if(t>='A'&&t<='Z'&&a[t-'A'+36]) return 1;
    return 0;
}
int main() {
    char t;
    char ct[1010];
    int a[62]={0, };
    int n, f;
    for(int i=0;i<3;i++) {
        scanf("%d\n", &n);
        f=i==2?0:1;
        for(int j=0;j<n;j++) {
            scanf(" %c", &t);
            if(t>='0'&&t<='9') a[t-'0']=f;
            else if(t>='a'&&t<='z') a[t-'a'+10]=f;
            else if(t>='A'&&t<='Z') a[t-'A'+36]=f;
        }
    }
    scanf("%d\n", &n);
    fgets(ct, 1005, stdin);
    f=1;
    for(int i=0;i<n;i++) {
        if(!chk(a, ct[i])) {
            if(!f) printf("\n");
            if(ct[i]=='\n') return 1028;
            printf("%c",  ct[i]);
            f=2;
        }
        else if(f==2) f=0;
    }
    return 0;
}
