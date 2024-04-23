#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    for(int i=0;i<n;i++) {
        for(int j=0;j<n*2;j++) {
            printf("%c", ((!(i%2))&&(j+1==n*2))?'\n':((i+j)%2?' ':'*'));
        }
        if(i%2) printf("\n");
    }
    return 0;
}
