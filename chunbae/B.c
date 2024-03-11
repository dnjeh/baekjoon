#include <stdio.h>
int main() {
    int i, n, dae=0, so=0, f=0;
    char t[120];
    scanf("%d", &n);
    scanf("%s", t);
    for(i=0;i<n;i++) {
        switch(t[i]) {
        case 'r':
            so|=1<<6;
            break;
        case 'o':
            so|=1<<5;
            break;
        case 'y':
            so|=1<<4;
            break;
        case 'g':
            so|=1<<3;
            break;
        case 'b':
            so|=1<<2;
            break;
        case 'i':
            so|=1<<1;
            break;
        case 'v':
            so|=1;
            break;
        case 'R':
            dae|=1<<6;
            break;
        case 'O':
            dae|=1<<5;
            break;
        case 'Y':
            dae|=1<<4;
            break;
        case 'G':
            dae|=1<<3;
            break;
        case 'B':
            dae|=1<<2;
            break;
        case 'I':
            dae|=1<<1;
            break;
        case 'V':
            dae|=1;
            break;
        default:
            break;
        }
    }
    if(so==0b1111111) f|=1<<1;
    if(dae==0b1111111) f|=1;
    if(f==0b11) printf("YeS");
    else if(f==0b10) printf("yes");
    else if(f==1) printf("YES");
    else printf("NO!");
}