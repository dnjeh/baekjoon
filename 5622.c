#include <stdio.h>

int main() {
    int sum=0;
    char t[20];
    scanf("%s", t);
    for(int i=0;t[i];i++) {
        sum+=3+(t[i]-65)/3;
        switch(t[i]) {
            case 'V': case 'Y': case 'Z': case 'S': 
                sum--;
                break;
            default:
                break;
        }
    }
    printf("%d", sum);
}
