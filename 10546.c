#include <stdio.h>
int a[25];
int main() {
    char t[25];
    int n;
    scanf("%d", &n);
    for(int i=0;i<n;i++) {
        scanf("%s", t);
        for(int j=0;t[j];j++) {
            a[j]+=t[j];
        }
    }
    for(int i=0;i<n-1;i++) {
        scanf("%s", t);
        for(int j=0;t[j];j++) {
            a[j]-=t[j];
        }
    }
    for(int i=0;a[i];i++) {
        printf("%c", a[i]);
    }
}