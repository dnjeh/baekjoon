#include <stdio.h>
int main() {
    char t[110];
    int n;
    scanf("%d\n", &n);
    for(int i=0;i<n;i++) {
        scanf("%s", t);
        printf("%sDORO", t);
        if(i+1<n) printf(" ");
    }
}