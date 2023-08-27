#include <stdio.h>
char a[101], b[101], c[101];
int mem[101][101][101];
int m(int a, int b) {
    return a>b?a:b;
}
int main() {
    int i, j, k;
	scanf("%s\n%s\n%s", a+1, b+1, c+1);
	for(i=1;a[i];i++) {
		for(j=1;b[j];j++) {
            for(k=1;c[k];k++) {
			    if(a[i]==b[j]&&b[j]==c[k]) mem[i][j][k]=mem[i-1][j-1][k-1]+1;
		        else mem[i][j][k]=m(mem[i-1][j][k], m(mem[i][j-1][k], mem[i][j][k-1]));
            }
        }
    }
	printf("%d", mem[i-1][j-1][k-1]);
}