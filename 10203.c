#include <stdio.h>
int main() {
    char t[1000];
    int n, tcnt;
    scanf("%d", &n);
    for(int i=0;i<n;i++) {
        tcnt=0;
        scanf("%s", t);
        for(int j=0;t[j];j++) {
            switch(t[j]) {
            case 'a': case 'e': case 'i': case 'o': case 'u': 
                tcnt++;
                break;
            default:
                break;
            }
        }
        printf("The number of vowels in %s is %d.\n", t, tcnt);
    }
}