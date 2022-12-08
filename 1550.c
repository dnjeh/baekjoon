#include <stdio.h>
#include <math.h>
#include <string.h>
int main() {
    int sum=0, i;
    char a[7];
    scanf("%s", a);
    for(i=(int)strlen(a)-1;i>=0;i--) {
        sum+=(int)(a[i]>='A'?a[i]-55:a[i]-48)*(int)pow(16, (int)strlen(a)-1-i);
    }
    printf("%d", sum);
}