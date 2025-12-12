#include <stdio.h>
int main() {
    char t[3][10] = {"Joffrey ", "Robb ", "Stannis"};
    int a[2][3];
    for(int i=0;i<2;i++) {
        for(int j=0;j<3;j++) {
            scanf("%d", &a[i][j]);
        }
    } 
    for(int i=0;i<3;i++) {
        if((a[0][i]*a[1][i]>=a[0][0]*a[1][0])&&
           (a[0][i]*a[1][i]>=a[0][1]*a[1][1])&&
           (a[0][i]*a[1][i]>=a[0][2]*a[1][2]))
            printf("%s", t[i]);
    }
}