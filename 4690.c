#include <stdio.h>
int main() {
    for(int i=2;i<=100;i++) for(int j=2;j<=100;j++) for(int k=j;k<=100;k++) for(int l=k;l<=100;l++) {
        if(i*i*i==j*j*j+k*k*k+l*l*l) printf("Cube = %d, Triple = (%d,%d,%d)\n", i, j, k, l);
    }
}