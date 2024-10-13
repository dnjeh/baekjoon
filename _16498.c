#include <stdio.h>
int a[3][1000];
int main() {
    int aind[3];
    for(int i=0;i<3;i++) {
        scanf("%d", &aind[i]);
    }
    for(int i=0;i<3;i++) {
        for(int j=0;j<aind[i];j++) {
            scanf("%d", &a[i][j]);
        }
    }
    for(int i=0;i<aind[0];i++) {
        for(int j=0;j<aind[1];j++) {
            
        }
    }
}