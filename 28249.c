#include <stdio.h>

int main() {
    int n, sum=0;
    char t[10];
    scanf("%d", &n);
    for(int i=0;i<n;i++) {
        scanf("%s", t);
        switch(t[0]) {
            case 'P':
                sum+=1500;
                break;
            case 'M':
                sum+=6000;
                break;
            case 'S':
                sum+=15500;
                break;
            case 'C':
                sum+=40000;
                break;
            case 'T':
                sum+=75000;
                break;
            case 'H':
                sum+=125000;
                break;
        }
    }
    printf("%d", sum);
    return 0;
}
