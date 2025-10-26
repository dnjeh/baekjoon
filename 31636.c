#include <stdio.h>
int main() {
    char t[100100];
    int n;
    scanf("%d\n%s", &n, t);
    for(int i=0;i<n-2;i++) {
        if(t[i]==t[i+1]&&t[i+1]==t[i+2]&&t[i]=='o') {
            printf("Yes");
            return 0;
        }
    }
    printf("No");
}