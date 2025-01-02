#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    for(int i=0;i<n;i++) {
        printf("LoveisKoreaUniversity");
        if(i+1<n) printf(" ");
    }
}