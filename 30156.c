#include <stdio.h>
int main() {
    char t[110];
    int T, a, b;
    scanf("%d", &T);
    for(int i=0;i<T;i++) {
        scanf("%s", t);
        a=b=0;
        for(int j=0;t[j];j++) {
            if(t[j]=='a') a++;
            else b++;
        }
        printf("%d\n", a<b?a:b);
    }
}