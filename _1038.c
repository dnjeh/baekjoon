#include <stdio.h>
int a[11];   
int cnt=0, n;
void back(int tcnt, int t, int f) {
    int i;
    if(f) {
        cnt++;
        if(cnt==n) {
            for(i=1;i)
        }
    }
    else {

    }
}
int main() {
    scanf("%d", &n);
    if(!n) {
        printf("%d", 0);
        return 0;
    }
    back(0, 10, 0);
}