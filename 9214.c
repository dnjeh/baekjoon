#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int ind=0;

int ati(char t) {
    return t-48;
}

void print(const char* t) {
    printf("Test %d: %s\n", ++ind, t);
}

int main() {
    int n, pre=10, tind=0, i;
    char t[2][210]={{0, },};
    for(scanf(" %s", t[0]);t[0][0]!='0'||t[0][1];scanf(" %s", t[0])) {
        for(i=0;;i++) {
            if(strlen(t[i%2])%2) break;
            if(!strcmp(t[i%2], t[(i+1)%2])) break;
            tind=0;
            for(int j=0;t[i%2][j];j+=2) {
                if(pre!=10&&pre==ati(t[i%2][j+1])) break;
                for(int k=0;k<ati(t[i%2][j]);k++) {
                    t[(i+1)%2][tind++]=t[i%2][j+1];
                }    
            }
            t[(i+1)%2][tind]=0;
        }
        print(t[i%2]);
    }
    return 0;
}
