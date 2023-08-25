#include <stdio.h>
char a[1001], b[1001];
int mem[1001][1001];

int main() {
    int i, j;
	scanf("%s\n%s", a+1, b+1);
	for(i=1;a[i];i++) {
		for(j=1;b[j];j++) {
			if(a[i]==b[j]) mem[i][j]=mem[i-1][j-1]+1;
		    else mem[i][j]=mem[i-1][j]>mem[i][j-1]?mem[i-1][j]:mem[i][j-1];
        }
    }
	printf("%d", mem[i-1][j-1]);
}