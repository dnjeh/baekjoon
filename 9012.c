#include <stdio.h>
int main() {
    int i, T, t, j;
    char a[51];
    scanf("%d", &T);
    for(i=0;i<T;i++) {
        scanf("%s", a);
        for(j=0, t=0;a[j];j++) {
            if(a[j]=='(') {
                t++;
            }
            else {
                t--;
                if(t<0) {
                    break;
                }
            }
        }
        printf(t?"NO\n":"YES\n");
    }
}