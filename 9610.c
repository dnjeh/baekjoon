#include <stdio.h>
int main() {
    int a, b, c, d, e, x, y, n;
    a=b=c=d=e=0;
    scanf("%d", &n);
    for(int i=0;i<n;i++) {
        scanf("%d %d", &x, &y);
        if(y==0||x==0) e++;
        else if(y>0&&x>0) a++;
        else if(y>0&&x<0) b++;
        else if(y<0&&x<0) c++;
        else if(y<0&&x>0) d++;
    }
    printf("Q1: %d\nQ2: %d\nQ3: %d\nQ4: %d\nAXIS: %d", a, b, c, d, e);
}