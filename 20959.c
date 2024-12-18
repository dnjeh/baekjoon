#include <stdio.h>
int main() {
    int a[1000]={0, }, ans=0, pre=0, f=0;
    char t[110];
    scanf("%s", t);
    for(int i=0;t[i];i++) {
        if(t[i]>='0'&&t[i]<='9') {
            f=1;
            pre*=10; 
            pre+=t[i]-'0';
        }
        else {
            if(f) {
                f=0;
                if(!a[pre]) {
                    a[pre]=1;
                    ans++;
                }
            }
            pre=0;
        }
    }
    if(f) {
        f=0;
        if(!a[pre]) {
            a[pre]=1;
            ans++;
        }
    }
    printf("%d", ans);
}