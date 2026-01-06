#include <stdio.h>
int main() {
    char t[7];
    for(scanf("%s", t);t[0]!='e';scanf("%s", t)) {
        if(t[0]=='a') printf("Panthera tigris\n");
        else if(t[0]=='t') printf("Pinus densiflora\n");
        else printf("Forsythia koreana\n");
    }
}