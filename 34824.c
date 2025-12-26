#include <stdio.h>
#include <string.h>
int main() {
    char t[55];
    int n;
    scanf("%d", &n);
    for(int i=0;i<n;i++) {
        scanf("%s", t);
        if(!strcmp(t, "yonsei")) {
            printf("Yonsei Won!");
            return 0;
        }
        else if(!strcmp(t, "korea")) {
            printf("Yonsei Lost...");
            return 0;
        }
    }
}