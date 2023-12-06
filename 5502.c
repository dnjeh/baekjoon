#include <stdio.h>
#include <string.h>
char a[5001], b[5001];
int mem[5001][5001], n;

void initb() {
    int i; 
    for(i=n;i>=1;i--) {
        b[n-i+1]=a[i];
    }
}

int main() {
    int i, j;
    scanf("%d\n%s", &n, a+1);
    initb();
	for(i=1;i<=n;i++) {
		for(j=1;j<=n;j++) {
			if(a[i]==b[j]) mem[i][j]=mem[i-1][j-1]+1;
		    else mem[i][j]=mem[i-1][j]>mem[i][j-1]?mem[i-1][j]:mem[i][j-1];
        }
    }
	printf("%d", n-mem[n][n]);
}