#include <stdio.h>
#include <string.h>
int main() {
    int T, f=1;
    char a[7][55] = {
        "Never gonna give you up\n",
        "Never gonna let you down\n",
        "Never gonna run around and desert you\n",
        "Never gonna make you cry\n",
        "Never gonna say goodbye\n",
        "Never gonna tell a lie and hurt you\n",
        "Never gonna stop\n"
    };
    char t[55];
    scanf("%d\n", &T);
    for(int i=0;i<T&&f;i++) {
        f=0;
        fgets(t, 42, stdin);
        for(int j=0;j<7;j++) {
            if(!strcmp(t, a[j])) f=1;
        }
    }
    if(!f) printf("Yes");
    else printf("No");
}