#include <stdio.h>

int main() {
    char t[15]={'\0', };
    int f=0;
    for(int i=0;i<5;i++) {
        scanf("%s", t);
        for(int j=0;t[j+2];j++) {
            if(t[j]=='F'&&t[j+1]=='B'&&t[j+2]=='I') {
                if(f) printf(" ");
                printf("%d", i+1);
                f=1;
                break;
            }
        }
    }
    if(!f) printf("HE GOT AWAY!");
    return 0;
}
