#include <stdio.h>

int main() {
    int T, tans;
    char a[110], b[110];
    scanf("%d", &T);
    for(int i=0;i<T;i++) {
        tans=0;
        scanf("%s %s", a, b);
        for(int j=0;a[j];j++) {
            if(a[j]-b[j]) tans++;
        }
        printf("Hamming distance is %d.\n", tans);
    }
}
