#include <stdio.h>
int main() {
    char a[1000], _t; 
    int T, tsum=0, t; 
    scanf("%d", &T); 
    scanf("%c", &_t);
    for(int i=0;i<T;i++) {
        tsum=t=0; 
        scanf("%[^\n]s", a);
        scanf("%c", &_t); 
        for(int j=0;a[i];i++) {
            if(a[j]==' ') {
                tsum+=t; 
                t=0; 
            }
            else {
                t=t*10+a[j]-'0'; 
            }
        }
        tsum+=t; 
        printf("%d\n", tsum);
    }
}