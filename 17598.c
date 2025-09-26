#include <stdio.h>
int main() {
    int cnt = 0;
    char t[6];  
    for(int i=0;i<9;i++) {
        scanf("%s", t);
        if(t[0]=='L') cnt++;
    }
    printf("%s", cnt>=5?"Lion":"Tiger");
}