#include <stdio.h>
int main() {
    int p, w, sum=0;
    char t, ttt='\0';
    scanf("%d %d", &p, &w);
    getchar();
    for(;scanf("%c", &t)!=EOF&&t!='\n';) {
        switch(t) {
        case 'A': case 'B': case 'C':
            if(ttt=='A'||ttt=='B'||ttt=='C') sum+=w;
            sum+=p*(t+32-96);
            break;
        case 'D': case 'E': case 'F':
            if(ttt=='D'||ttt=='E'||ttt=='F') sum+=w;
            sum+=p*(t+32-99);
            break;
        case 'G': case 'H': case 'I':
            if(ttt=='G'||ttt=='H'||ttt=='I') sum+=w;
            sum+=p*(t+32-102);
            break;
        case 'J': case 'K': case 'L':
            if(ttt=='J'||ttt=='K'||ttt=='L') sum+=w;
            sum+=p*(t+32-105);
            break;
        case 'M': case 'N': case 'O':
            if(ttt=='M'||ttt=='N'||ttt=='O') sum+=w;
            sum+=p*(t+32-108);
            break;
        case 'P': case 'Q': case 'R': case 'S':
            if(ttt=='P'||ttt=='Q'||ttt=='R'||ttt=='S') sum+=w;
            sum+=p*(t+32-111);
            break;
        case 'T': case 'U': case 'V':
            if(ttt=='T'||ttt=='U'||ttt=='V') sum+=w;
            sum+=p*(t+32-115);
            break;
        case 'W': case 'X': case 'Y': case 'Z':
            if(ttt=='W'||ttt=='X'||ttt=='Y'||ttt=='Z') sum+=w;
            sum+=p*(t+32-118);
            break;
        default:
            sum+=p;
            break;
        }
        ttt=t;
    }
    printf("%d", sum);
}