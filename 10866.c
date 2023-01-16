#include <stdio.h>
int d[10000];
int main() {
    int ap=0, due=1, siz=0, n, i, tt;
    char t[10];
    scanf("%d", &n);
    for(i=0;i<n;i++) {
        scanf("%s", t);
        switch(t[0]) {
        case 's':
            printf("%d\n", siz);
            break;
        case 'e':
            printf(siz?"0\n":"1\n");
            break;
        case 'f':
            printf("%d\n", siz?d[(ap+1+10000)%10000]:-1);
            break;
        case 'b':
            printf("%d\n", siz?d[(due-1+10000)%10000]:-1);
            break;
        default:
            switch(t[5]) {
            case 'f':
                scanf("%d\n", &tt);
                d[(10000+ap--)%10000]=tt;
                siz++;
                break;
            case 'b':
                scanf("%d\n", &tt);
                d[(10000+due++)%10000]=tt;
                siz++;
                break;
            case 'r':
                if(siz) {
                    printf("%d\n", d[(10000+(ap++)+1)%10000]);
                    siz--;
                }
                else printf("-1\n");
                break;
            case 'a':
                if(siz) {
                    printf("%d\n", d[(10000+(due--)-1)%10000]);
                    siz--;
                }
                else printf("-1\n");
                break;
            default:
                break;
            }
            break;
        }
    }
}