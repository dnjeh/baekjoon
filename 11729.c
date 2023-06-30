#include <stdio.h>
#include <math.h>

void func(int n, int a, int b, int c) {
	if(n == 1) printf("%d %d\n", a, c);
	else {
		func(n-1, a, c, b);
		printf("%d %d\n", a, c);
		func(n-1, b, a, c);
	}
}

int main() {
    int n;
    scanf("%d", &n);
    printf("%d\n", (int)pow(2, n)-1);
    func(n, 1, 2, 3);
}
