#include <stdio.h>
int main() {
    int t, t1;
    char name[11]={'\0'};
    for(scanf("%s %d %d", name, &t, &t1);t!=0&&t1!=0&&name[0]!='#';scanf("%s %d %d", name, &t, &t1)) {
        if(t>17||t1>=80) {
            printf("%s Senior\n", name);
        }
        else {
            printf("%s Junior\n", name);
        }
    }
}