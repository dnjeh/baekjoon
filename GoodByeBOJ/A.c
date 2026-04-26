#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    for(int i=0;i<n*2;i++) {
        for(int j=i;j<n*2-1;j++) printf(" ");
        printf("*");
        for(int j=0;j<i;j++) printf(" ");

        printf(" ");

        for(int j=0;i<n?j<n-i-1:j<i-n;j++) printf(" ");
        printf("*");
        for(int j=0;i<n?j<i:j<n*2-i-1;j++) printf(" ");

        printf(" ");

        for(int j=0;i<n?j<i:j<n*2-i-1;j++) printf(" ");
        printf("*");
        for(int j=0;i<n?j<n-i-1:j<i-n;j++) printf(" ");

        if(i+1<n*2) printf("\n");
    }
}